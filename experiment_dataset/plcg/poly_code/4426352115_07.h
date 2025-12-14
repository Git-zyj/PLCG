#ifndef _4426352115_07_H
#define _4426352115_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_P
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_Q
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define wM PB_Q
# define xN PB_M
# define yN PB_M
# define zN PB_L
# define vN PB_P
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

