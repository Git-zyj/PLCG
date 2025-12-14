#ifndef _4436331121_08_H
#define _4436331121_08_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define xB PB_N
# define yB PB_M
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define xG PB_N
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_N
# define yJ PB_M
# define xK PB_M
# define yK PB_M
# define zK PB_P
# define xL PB_L
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

