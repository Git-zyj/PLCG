#ifndef _3326352121_01_H
#define _3326352121_01_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 40
# define PB_P 30
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_L
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define yF PB_M
# define xG PB_L
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
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

