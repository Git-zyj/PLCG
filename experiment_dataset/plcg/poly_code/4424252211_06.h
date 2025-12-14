#ifndef _4424252211_06_H
#define _4424252211_06_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_M
# define xC PB_M
# define yC PB_P
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define wE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_N
# define xK PB_N
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

