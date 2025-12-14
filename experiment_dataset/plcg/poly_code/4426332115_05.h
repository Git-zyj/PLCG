#ifndef _4426332115_05_H
#define _4426332115_05_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_P
# define xC PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_P
# define xH PB_M
# define xI PB_L
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_P
# define xL PB_N
# define yL PB_M
# define zL PB_P
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

