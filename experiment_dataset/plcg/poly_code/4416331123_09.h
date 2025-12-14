#ifndef _4416331123_09_H
#define _4416331123_09_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 9
/* params end */
# define xA PB_L
# define xD PB_L
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_N
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define xI PB_L
# define yI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_N
# define yM PB_M
# define zM PB_L
# define vM PB_P
# define xN PB_M
# define yN PB_L
# define zN PB_P
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

