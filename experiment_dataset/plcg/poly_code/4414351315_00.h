#ifndef _4414351315_00_H
#define _4414351315_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xD PB_N
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_P
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
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

