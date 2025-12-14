#ifndef _4436132213_09_H
#define _4436132213_09_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_Q
# define wD PB_Q
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
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

