#ifndef _4332252121_07_H
#define _4332252121_07_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define xC PB_L
# define yC PB_P
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_Q
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

