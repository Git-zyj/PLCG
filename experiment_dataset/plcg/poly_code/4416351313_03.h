#ifndef _4416351313_03_H
#define _4416351313_03_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_P
# define xC PB_N
# define yC PB_L
# define xD PB_M
# define xE PB_L
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define wE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_N
# define yI PB_M
# define zI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define xL PB_L
# define yL PB_P
# define xM PB_M
# define yM PB_L
# define xN PB_M
# define xO PB_M
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

