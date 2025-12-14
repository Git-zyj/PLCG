#ifndef _4432352323_03_H
#define _4432352323_03_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_M
# define vA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_M
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_L
# define zG PB_L
# define vG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_P
# define xI PB_M
# define yI PB_M
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_L
# define xL PB_M
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

