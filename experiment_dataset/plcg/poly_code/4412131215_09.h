#ifndef _4412131215_09_H
#define _4412131215_09_H
/* params start */
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xD PB_M
# define yD PB_P
# define zD PB_P
# define vD PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xE PB_M
# define yE PB_M
# define zE PB_M
# define vE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define wG PB_Q
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

