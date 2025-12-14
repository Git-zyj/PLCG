#ifndef _4434232223_00_H
#define _4434232223_00_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_N
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xD PB_N
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_N
# define yG PB_L
# define zG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_M
# define xJ PB_L
# define yJ PB_P
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

