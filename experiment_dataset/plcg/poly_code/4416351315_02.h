#ifndef _4416351315_02_H
#define _4416351315_02_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xD PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xE PB_N
# define yE PB_M
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_L
# define xI PB_N
# define yI PB_M
# define zI PB_M
# define vI PB_L
# define xJ PB_N
# define yJ PB_N
# define zJ PB_L
# define vJ PB_P
# define xK PB_L
# define yK PB_P
# define xL PB_M
# define xM PB_M
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

