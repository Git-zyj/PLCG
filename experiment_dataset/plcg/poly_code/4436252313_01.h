#ifndef _4436252313_01_H
#define _4436252313_01_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_M
# define vA PB_P
# define xB PB_N
# define yB PB_M
# define zB PB_P
# define xC PB_M
# define yC PB_L
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_M
# define xJ PB_L
# define yJ PB_P
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

