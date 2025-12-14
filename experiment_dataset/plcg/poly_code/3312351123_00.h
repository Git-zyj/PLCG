#ifndef _3312351123_00_H
#define _3312351123_00_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 30
# define PB_P 30
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xC PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_N
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define xK PB_M
# define yK PB_P
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

