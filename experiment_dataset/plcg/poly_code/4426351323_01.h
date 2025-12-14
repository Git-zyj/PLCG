#ifndef _4426351323_01_H
#define _4426351323_01_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_N
# define yB PB_N
# define zB PB_L
# define vB PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define wD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define wH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define wI PB_Q
# define xJ PB_N
# define yJ PB_M
# define zJ PB_P
# define vJ PB_Q
# define xK PB_N
# define xL PB_M
# define xM PB_M
# define xN PB_L
# define yN PB_P
# define zN PB_Q
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

