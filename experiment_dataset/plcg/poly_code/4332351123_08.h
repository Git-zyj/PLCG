#ifndef _4332351123_08_H
#define _4332351123_08_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define wC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_N
# define yE PB_N
# define xF PB_L
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define xI PB_M
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
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

