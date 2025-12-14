#ifndef _4322352125_09_H
#define _4322352125_09_H
/* params start */
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define vB PB_P
# define xD PB_L
# define yD PB_P
# define zD PB_P
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_M
# define zH PB_M
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_L
# define xJ PB_M
# define yJ PB_L
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

