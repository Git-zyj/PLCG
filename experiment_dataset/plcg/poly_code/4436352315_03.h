#ifndef _4436352315_03_H
#define _4436352315_03_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xD PB_M
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_L
# define yI PB_L
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
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

