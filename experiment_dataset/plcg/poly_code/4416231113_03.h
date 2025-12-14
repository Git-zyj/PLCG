#ifndef _4416231113_03_H
#define _4416231113_03_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xC PB_M
# define xB PB_L
# define yB PB_P
# define zB PB_P
# define xE PB_M
# define xF PB_L
# define xG PB_N
# define yG PB_L
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_P
# define xL PB_L
# define yL PB_P
# define zL PB_Q
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

