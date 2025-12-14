#ifndef _4412351115_06_H
#define _4412351115_06_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define xG PB_N
# define yG PB_N
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_N
# define yI PB_N
# define zI PB_L
# define vI PB_P
# define xJ PB_N
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_N
# define yM PB_L
# define zM PB_P
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

