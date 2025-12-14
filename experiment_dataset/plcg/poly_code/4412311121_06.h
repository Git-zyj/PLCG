#ifndef _4412311121_06_H
#define _4412311121_06_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define xB PB_L
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define xF PB_M
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

