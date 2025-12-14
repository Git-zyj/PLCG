#ifndef _3414351225_00_H
#define _3414351225_00_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_M
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define yF PB_N
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_N
# define yJ PB_M
# define zJ PB_M
# define vJ PB_L
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define xM PB_N
# define xN PB_M
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

