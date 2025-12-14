#ifndef _4432332311_09_H
#define _4432332311_09_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_P
# define xC PB_N
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_N
# define yE PB_M
# define zE PB_M
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_N
# define yL PB_M
# define zL PB_M
# define vL PB_L
# if !defined(DATA_TYPE_IS_FLOAT) && !defined(DATA_TYPE_IS_DOUBLE)
#  define DATA_TYPE_IS_DOUBLE
# endif
#ifdef DATA_TYPE_IS_FLOAT
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%f "
#  define SCALAR_VAL(x) x##f
#  define SQRT_FUN(x) sqrtf(x)
#  define EXP_FUN(x) expf(x)
#  define POW_FUN(x,y) powf(x,y)
# endif
#ifdef DATA_TYPE_IS_DOUBLE
#  define DATA_TYPE double
#  define DATA_PRINTF_MODIFIER "%lf "
#  define SCALAR_VAL(x) x
#  define SQRT_FUN(x) sqrt(x)
#  define EXP_FUN(x) exp(x)
#  define POW_FUN(x,y) pow(x,y)
# endif
# endif

