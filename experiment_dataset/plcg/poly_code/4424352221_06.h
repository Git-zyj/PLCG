#ifndef _4424352221_06_H
#define _4424352221_06_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_L
# define xC PB_N
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xE PB_N
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_M
# define zL PB_M
# define vL PB_M
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

