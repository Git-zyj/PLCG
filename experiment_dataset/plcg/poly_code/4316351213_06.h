#ifndef _4316351213_06_H
#define _4316351213_06_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 40
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_N
# define yA PB_N
# define xB PB_L
# define xD PB_M
# define yD PB_P
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define xG PB_M
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_P
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

