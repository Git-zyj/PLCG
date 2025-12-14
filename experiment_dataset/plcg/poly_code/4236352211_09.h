#ifndef _4236352211_09_H
#define _4236352211_09_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_M
# define zD PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define wF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define yH PB_L
# define zH PB_P
# define vH PB_Q
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

