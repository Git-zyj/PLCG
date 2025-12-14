#ifndef _2332351323_00_H
#define _2332351323_00_H
/* params start */
# define PB_N 90
# define PB_M 90
# define PB_L 70
# define PB_P 60
# define PB_Q 100
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define xD PB_L
# define yD PB_Q
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define xH PB_N
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

