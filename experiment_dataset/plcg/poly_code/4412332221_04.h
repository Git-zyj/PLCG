#ifndef _4412332221_04_H
#define _4412332221_04_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_L
# define yB PB_P
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_L
# define yD PB_L
# define zD PB_L
# define vD PB_P
# define xE PB_L
# define yE PB_Q
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define vG PB_M
# define wG PB_L
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_N
# define yI PB_N
# define zI PB_M
# define vI PB_L
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

