#ifndef _4316331125_09_H
#define _4316331125_09_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_M
# define vC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define vF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_L
# define wG PB_P
# define xH PB_L
# define yH PB_P
# define zH PB_Q
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

