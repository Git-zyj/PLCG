#ifndef _4424332225_02_H
#define _4424332225_02_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_P
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
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

