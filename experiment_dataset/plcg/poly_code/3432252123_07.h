#ifndef _3432252123_07_H
#define _3432252123_07_H
/* params start */
# define PB_N 50
# define PB_M 30
# define PB_L 50
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_N
# define yE PB_N
# define xF PB_N
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_Q
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

