#ifndef _4426352323_01_H
#define _4426352323_01_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xD PB_L
# define yD PB_P
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_N
# define yJ PB_N
# define zJ PB_M
# define vJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_P
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

