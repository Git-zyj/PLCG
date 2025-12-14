#ifndef _4412252313_07_H
#define _4412252313_07_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define yH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_P
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_L
# define yL PB_P
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_Q
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

