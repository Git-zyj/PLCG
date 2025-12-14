#ifndef _4314352211_05_H
#define _4314352211_05_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 40
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_P
# define yA PB_Q
# define xB PB_M
# define yB PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_M
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_L
# define yI PB_L
# define zI PB_Q
# define vI PB_Q
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

