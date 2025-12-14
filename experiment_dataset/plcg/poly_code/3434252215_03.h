#ifndef _3434252215_03_H
#define _3434252215_03_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 50
# define PB_P 50
/* params end */
# define xA PB_N
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define xE PB_N
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_L
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

