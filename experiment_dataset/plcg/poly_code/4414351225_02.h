#ifndef _4414351225_02_H
#define _4414351225_02_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xD PB_N
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_M
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define xM PB_M
# define xN PB_M
# define xO PB_N
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

