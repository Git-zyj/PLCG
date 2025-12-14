#ifndef _4412152223_01_H
#define _4412152223_01_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define vC PB_P
# define wC PB_Q
# define xD PB_N
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define wG PB_Q
# define xH PB_M
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

