#ifndef _4416352315_07_H
#define _4416352315_07_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xB PB_M
# define yB PB_L
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define xL PB_L
# define xM PB_L
# define yM PB_L
# define xN PB_L
# define yN PB_P
# define zN PB_Q
# define xO PB_L
# define yO PB_P
# define zO PB_Q
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

