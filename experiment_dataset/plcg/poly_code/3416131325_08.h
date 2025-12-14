#ifndef _3416131325_08_H
#define _3416131325_08_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 50
# define PB_P 30
# define PB_Q 30
/* params end */
# define xD PB_L
# define yD PB_P
# define xB PB_L
# define yB PB_Q
# define zB PB_Q
# define xC PB_M
# define xE PB_N
# define yE PB_L
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_L
# define vG PB_P
# define xH PB_L
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

