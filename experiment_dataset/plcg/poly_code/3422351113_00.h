#ifndef _3422351113_00_H
#define _3422351113_00_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 50
# define PB_P 40
# define PB_Q 40
/* params end */
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define xB PB_L
# define xD PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_L
# define xJ PB_M
# define yJ PB_P
# define xK PB_M
# define xL PB_M
# define yL PB_L
# define xM PB_M
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

