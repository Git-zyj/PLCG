#ifndef _4322331325_01_H
#define _4322331325_01_H
/* params start */
# define PB_N 90
# define PB_M 60
# define PB_L 80
# define PB_Q 80
/* params end */
# define xA PB_N
# define xC PB_L
# define yC PB_L
# define xD PB_L
# define xE PB_M
# define xF PB_L
# define xG PB_L
# define yG PB_Q
# define xH PB_M
# define yH PB_L
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

