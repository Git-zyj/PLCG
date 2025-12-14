#ifndef _4326352323_04_H
#define _4326352323_04_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_L
# define yC PB_L
# define zC PB_P
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define vK PB_Q
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

