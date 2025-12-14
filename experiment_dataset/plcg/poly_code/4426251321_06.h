#ifndef _4426251321_06_H
#define _4426251321_06_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_N
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_N
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define xJ PB_L
# define yJ PB_Q
# define xK PB_M
# define yK PB_L
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

