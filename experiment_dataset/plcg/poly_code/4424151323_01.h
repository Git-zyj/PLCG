#ifndef _4424151323_01_H
#define _4424151323_01_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_N
# define zA PB_N
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_N
# define yD PB_N
# define zD PB_M
# define vD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define wH PB_Q
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

