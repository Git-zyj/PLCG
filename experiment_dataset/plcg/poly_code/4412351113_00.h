#ifndef _4412351113_00_H
#define _4412351113_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_Q
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_M
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_Q
# define vM PB_Q
# define xN PB_N
# define yN PB_M
# define zN PB_L
# define vN PB_L
# define wN PB_P
# define xO PB_M
# define yO PB_L
# define zO PB_P
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

