#ifndef _4416251313_01_H
#define _4416251313_01_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define xC PB_M
# define yC PB_M
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_L
# define yI PB_P
# define xJ PB_N
# define yJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_P
# define vK PB_P
# define xL PB_M
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

