#ifndef _4422351211_03_H
#define _4422351211_03_H
/* params start */
# define PB_N 50
# define PB_M 30
# define PB_L 50
# define PB_P 40
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define xH PB_M
# define yH PB_P
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
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

