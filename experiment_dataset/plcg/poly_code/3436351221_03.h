#ifndef _3436351221_03_H
#define _3436351221_03_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 40
# define PB_P 40
/* params end */
# define xA PB_L
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_N
# define yJ PB_L
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

