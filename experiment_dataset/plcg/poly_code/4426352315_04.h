#ifndef _4426352315_04_H
#define _4426352315_04_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xD PB_M
# define yD PB_M
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_M
# define vH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_M
# define zJ PB_L
# define vJ PB_P
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define wL PB_Q
# define xM PB_M
# define yM PB_M
# define zM PB_L
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

