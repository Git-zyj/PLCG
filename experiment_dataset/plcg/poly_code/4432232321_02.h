#ifndef _4432232321_02_H
#define _4432232321_02_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xC PB_N
# define yC PB_N
# define zC PB_M
# define vC PB_P
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_L
# define yG PB_P
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define wH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_P
# define xJ PB_N
# define yJ PB_M
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

