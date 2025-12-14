#ifndef _3416312325_00_H
#define _3416312325_00_H
/* params start */
# define PB_M 30
# define PB_L 30
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_P
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xE PB_M
# define xF PB_M
# define yF PB_P
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

