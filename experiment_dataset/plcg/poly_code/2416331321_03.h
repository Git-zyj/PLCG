#ifndef _2416331321_03_H
#define _2416331321_03_H
/* params start */
# define PB_N 60
# define PB_M 60
# define PB_L 60
# define PB_P 100
/* params end */
# define xA PB_M
# define xB PB_M
# define xC PB_L
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define xH PB_N
# define yH PB_N
# define xI PB_N
# define yI PB_N
# define zI PB_M
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

