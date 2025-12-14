#ifndef _4312252125_00_H
#define _4312252125_00_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_P
# define xD PB_N
# define xE PB_N
# define yE PB_N
# define xF PB_M
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_P
# define vI PB_Q
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
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

