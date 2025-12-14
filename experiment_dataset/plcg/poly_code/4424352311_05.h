#ifndef _4424352311_05_H
#define _4424352311_05_H
/* params start */
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define vA PB_Q
# define wA PB_Q
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_P
# define xK PB_L
# define yK PB_P
# define xL PB_M
# define xM PB_M
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

