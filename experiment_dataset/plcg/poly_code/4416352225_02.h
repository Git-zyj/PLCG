#ifndef _4416352225_02_H
#define _4416352225_02_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_N
# define yI PB_L
# define zI PB_P
# define xJ PB_L
# define yJ PB_L
# define zJ PB_P
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_L
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define vL PB_P
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

