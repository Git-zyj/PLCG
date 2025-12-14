#ifndef _4426352215_07_H
#define _4426352215_07_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 40
# define PB_P 40
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define xE PB_N
# define xF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_P
# define xI PB_L
# define yI PB_L
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_N
# define yL PB_L
# define zL PB_L
# define xM PB_N
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

