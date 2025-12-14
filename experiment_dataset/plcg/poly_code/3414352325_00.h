#ifndef _3414352325_00_H
#define _3414352325_00_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 40
# define PB_P 40
# define PB_Q 40
/* params end */
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xB PB_N
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_P
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_L
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

