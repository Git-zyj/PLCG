#ifndef _4414352225_06_H
#define _4414352225_06_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_N
# define yI PB_M
# define zI PB_P
# define xJ PB_L
# define yJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define xM PB_M
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

