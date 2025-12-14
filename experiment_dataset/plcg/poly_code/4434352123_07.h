#ifndef _4434352123_07_H
#define _4434352123_07_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_L
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xE PB_M
# define yE PB_M
# define zE PB_M
# define vE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_N
# define xJ PB_L
# define xK PB_L
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define vL PB_P
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

