#ifndef _4422352215_02_H
#define _4422352215_02_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_P
# define zI PB_P
# define xJ PB_N
# define yJ PB_N
# define xK PB_M
# define yK PB_M
# define xL PB_L
# define yL PB_Q
# define xM PB_L
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

