#ifndef _4422231115_08_H
#define _4422231115_08_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define xD PB_N
# define yD PB_N
# define zD PB_M
# define vD PB_L
# define xE PB_N
# define yE PB_L
# define zE PB_Q
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_M
# define zJ PB_L
# define vJ PB_P
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

