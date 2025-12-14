#ifndef _4336351215_02_H
#define _4336351215_02_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 40
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define vG PB_L
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_M
# define xJ PB_M
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

