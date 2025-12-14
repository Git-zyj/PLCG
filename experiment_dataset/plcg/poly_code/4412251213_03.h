#ifndef _4412251213_03_H
#define _4412251213_03_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define xE PB_M
# define xF PB_N
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define zH PB_M
# define vH PB_L
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_L
# define yL PB_P
# define zL PB_P
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

