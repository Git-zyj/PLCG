#ifndef _3412351113_06_H
#define _3412351113_06_H
/* params start */
# define PB_M 30
# define PB_L 50
# define PB_P 30
# define PB_Q 40
/* params end */
# define xC PB_M
# define yC PB_L
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define xM PB_M
# define xN PB_M
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

