#ifndef _4424351215_08_H
#define _4424351215_08_H
/* params start */
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_L
# define xJ PB_M
# define xK PB_M
# define xL PB_M
# define yL PB_L
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

