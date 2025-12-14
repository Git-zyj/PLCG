#ifndef _4434331111_06_H
#define _4434331111_06_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_N
# define zA PB_M
# define vA PB_P
# define xB PB_N
# define yB PB_M
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define xE PB_L
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define xH PB_M
# define xI PB_L
# define xJ PB_M
# define yJ PB_P
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

