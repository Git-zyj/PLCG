#ifndef _3416232311_06_H
#define _3416232311_06_H
/* params start */
# define PB_N 60
# define PB_M 80
# define PB_L 90
# define PB_P 80
/* params end */
# define xD PB_M
# define yD PB_P
# define xB PB_L
# define xC PB_N
# define yC PB_L
# define xE PB_M
# define yE PB_P
# define xF PB_N
# define yF PB_M
# define xG PB_L
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
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

