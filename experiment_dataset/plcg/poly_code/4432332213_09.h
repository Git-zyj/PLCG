#ifndef _4432332213_09_H
#define _4432332213_09_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
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

