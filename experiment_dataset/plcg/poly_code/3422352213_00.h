#ifndef _3422352213_00_H
#define _3422352213_00_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 50
# define PB_P 30
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define xD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_N
# define yG PB_N
# define zG PB_L
# define vG PB_L
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define yI PB_M
# define zI PB_M
# define vI PB_L
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_N
# define yK PB_L
# define xL PB_M
# define xM PB_M
# define xN PB_L
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

