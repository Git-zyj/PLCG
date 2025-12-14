#ifndef _4416352115_06_H
#define _4416352115_06_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xC PB_L
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define xI PB_P
# define yI PB_Q
# define zI PB_Q
# define vI PB_Q
# define xJ PB_N
# define xK PB_M
# define yK PB_P
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_P
# define zL PB_P
# define vL PB_P
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

