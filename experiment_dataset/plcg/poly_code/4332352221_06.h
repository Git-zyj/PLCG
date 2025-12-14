#ifndef _4332352221_06_H
#define _4332352221_06_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_L
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define xE PB_N
# define xF PB_L
# define yF PB_L
# define xG PB_L
# define yG PB_Q
# define xH PB_M
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_M
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

