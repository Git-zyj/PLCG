#ifndef _4436251225_05_H
#define _4436251225_05_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define xC PB_L
# define yC PB_L
# define xE PB_N
# define xF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_L
# define wH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_N
# define yJ PB_M
# define xK PB_N
# define yK PB_M
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define vL PB_Q
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

