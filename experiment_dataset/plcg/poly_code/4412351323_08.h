#ifndef _4412351323_08_H
#define _4412351323_08_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_L
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define vB PB_P
# define xC PB_M
# define yC PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define vD PB_P
# define xE PB_M
# define xF PB_L
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_N
# define yK PB_N
# define zK PB_N
# define xL PB_M
# define yL PB_P
# define zL PB_Q
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

