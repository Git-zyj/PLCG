#ifndef _3322352221_06_H
#define _3322352221_06_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 50
# define PB_P 30
# define PB_Q 40
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_L
# define xB PB_L
# define xD PB_M
# define yD PB_P
# define xE PB_M
# define yE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define xH PB_M
# define xI PB_N
# define xJ PB_M
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_Q
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

