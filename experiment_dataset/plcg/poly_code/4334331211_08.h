#ifndef _4334331211_08_H
#define _4334331211_08_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_M
# define vG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
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

