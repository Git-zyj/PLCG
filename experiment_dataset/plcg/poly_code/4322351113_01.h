#ifndef _4322351113_01_H
#define _4322351113_01_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xC PB_M
# define yC PB_L
# define xB PB_N
# define yB PB_M
# define zB PB_M
# define vB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_P
# define xJ PB_N
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

