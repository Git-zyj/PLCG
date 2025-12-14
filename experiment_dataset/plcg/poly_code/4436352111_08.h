#ifndef _4436352111_08_H
#define _4436352111_08_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define xB PB_M
# define xC PB_L
# define yC PB_P
# define zC PB_P
# define vC PB_P
# define wC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_N
# define yE PB_M
# define xF PB_N
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define xI PB_M
# define xJ PB_N
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define xN PB_L
# define yN PB_L
# define zN PB_P
# define vN PB_Q
# define wN PB_Q
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

