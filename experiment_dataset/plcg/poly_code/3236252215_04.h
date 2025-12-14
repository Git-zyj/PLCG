#ifndef _3236252215_04_H
#define _3236252215_04_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_Q 30
/* params end */
# define xA PB_M
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define xC PB_N
# define xD PB_M
# define xE PB_L
# define yE PB_L
# define zE PB_L
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define xG PB_N
# define yG PB_L
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

