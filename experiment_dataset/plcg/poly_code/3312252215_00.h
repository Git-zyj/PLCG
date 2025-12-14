#ifndef _3312252215_00_H
#define _3312252215_00_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 50
# define PB_P 30
# define PB_Q 30
/* params end */
# define xC PB_M
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define xD PB_L
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_M
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

