#ifndef _4436352321_01_H
#define _4436352321_01_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xC PB_N
# define yC PB_N
# define xB PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_N
# define xG PB_M
# define xH PB_N
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define wL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_Q
# define vM PB_Q
# define xN PB_L
# define yN PB_P
# define zN PB_Q
# define vN PB_Q
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

