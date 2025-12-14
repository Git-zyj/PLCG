#ifndef _4432351215_02_H
#define _4432351215_02_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define xD PB_M
# define yD PB_L
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_M
# define xL PB_M
# define yL PB_M
# define xM PB_N
# define yM PB_L
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

