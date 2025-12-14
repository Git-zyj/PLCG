#ifndef _4424351221_02_H
#define _4424351221_02_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_M
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xE PB_M
# define xF PB_N
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define yM PB_M
# define zM PB_L
# define vM PB_L
# define xN PB_M
# define yN PB_L
# define zN PB_L
# define xO PB_M
# define yO PB_M
# define zO PB_P
# define vO PB_Q
# define wO PB_Q
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

