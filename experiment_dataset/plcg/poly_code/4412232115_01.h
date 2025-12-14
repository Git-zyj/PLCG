#ifndef _4412232115_01_H
#define _4412232115_01_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_N
# define yJ PB_N
# define zJ PB_M
# define vJ PB_L
# define xK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_Q
# define wL PB_Q
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

