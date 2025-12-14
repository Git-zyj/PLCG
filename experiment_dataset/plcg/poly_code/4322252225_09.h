#ifndef _4322252225_09_H
#define _4322252225_09_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define vA PB_Q
# define xC PB_M
# define yC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define vD PB_P
# define wD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define wE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_P
# define xI PB_N
# define yI PB_M
# define xJ PB_M
# define xK PB_M
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

