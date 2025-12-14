#ifndef _4432352123_06_H
#define _4432352123_06_H
/* params start */
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_L
# define zF PB_Q
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_P
# define xK PB_M
# define yK PB_P
# define xL PB_M
# define yL PB_L
# define xM PB_M
# define yM PB_P
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

