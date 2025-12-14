#ifndef _4426331111_07_H
#define _4426331111_07_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 40
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_L
# define yH PB_L
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
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

