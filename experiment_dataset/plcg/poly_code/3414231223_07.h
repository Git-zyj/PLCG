#ifndef _3414231223_07_H
#define _3414231223_07_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 40
# define PB_P 30
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xB PB_L
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define xI PB_N
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

