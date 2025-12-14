#ifndef _4422332315_06_H
#define _4422332315_06_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 40
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define xB PB_N
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define xG PB_N
# define xH PB_M
# define xI PB_N
# define yI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_L
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

