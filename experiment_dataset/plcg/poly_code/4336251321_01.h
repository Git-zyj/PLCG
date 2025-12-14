#ifndef _4336251321_01_H
#define _4336251321_01_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_N
# define yC PB_N
# define zC PB_M
# define vC PB_M
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define xF PB_N
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define vK PB_P
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

