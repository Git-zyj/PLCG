#ifndef _4432252223_02_H
#define _4432252223_02_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 10
/* params end */
# define xA PB_N
# define xB PB_M
# define xC PB_M
# define yC PB_P
# define xE PB_N
# define xF PB_L
# define xG PB_N
# define yG PB_M
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define xJ PB_N
# define yJ PB_N
# define zJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define vK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
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

