#ifndef _4432351325_01_H
#define _4432351325_01_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define xB PB_M
# define yB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_P
# define vC PB_Q
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_P
# define vH PB_Q
# define wH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_N
# define yJ PB_M
# define xK PB_M
# define yK PB_P
# define xL PB_M
# define yL PB_L
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define xN PB_N
# define yN PB_M
# define zN PB_L
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

