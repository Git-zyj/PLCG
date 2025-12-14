#ifndef _4436211125_05_H
#define _4436211125_05_H
/* params start */
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define wA PB_Q
# define xC PB_L
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_Q
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

