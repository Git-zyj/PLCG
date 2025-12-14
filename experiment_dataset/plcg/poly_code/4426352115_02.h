#ifndef _4426352115_02_H
#define _4426352115_02_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xD PB_L
# define yD PB_P
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define vC PB_Q
# define wC PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_P
# define xM PB_L
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define xN PB_N
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

