#ifndef _4336252313_03_H
#define _4336252313_03_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xE PB_N
# define yE PB_M
# define zE PB_P
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define vF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_L
# define yH PB_L
# define xI PB_L
# define yI PB_Q
# define xJ PB_N
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

