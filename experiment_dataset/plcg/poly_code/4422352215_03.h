#ifndef _4422352215_03_H
#define _4422352215_03_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_M
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_P
# define xK PB_L
# define xL PB_M
# define yL PB_M
# define xM PB_M
# define xN PB_N
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

