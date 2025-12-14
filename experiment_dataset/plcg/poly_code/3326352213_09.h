#ifndef _3326352213_09_H
#define _3326352213_09_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 30
# define PB_P 30
# define PB_Q 50
/* params end */
# define xC PB_L
# define yC PB_P
# define xB PB_N
# define yB PB_M
# define zB PB_M
# define vB PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_Q
# define xF PB_N
# define yF PB_L
# define zF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_L
# define yI PB_Q
# define xJ PB_M
# define xK PB_M
# define yK PB_M
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

