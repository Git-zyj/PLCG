#ifndef _4432351111_03_H
#define _4432351111_03_H
/* params start */
# define PB_N 50
# define PB_M 30
# define PB_L 50
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_P
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_L
# define yG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_N
# define yI PB_M
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_L
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

