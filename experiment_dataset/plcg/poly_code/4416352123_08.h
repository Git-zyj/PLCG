#ifndef _4416352123_08_H
#define _4416352123_08_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xC PB_N
# define yC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define wE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define vF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define xN PB_L
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

