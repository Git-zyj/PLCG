#ifndef _4414232125_00_H
#define _4414232125_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define xB PB_N
# define yB PB_M
# define xD PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define xH PB_N
# define yH PB_M
# define xI PB_N
# define xJ PB_M
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

