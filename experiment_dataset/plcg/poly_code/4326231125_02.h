#ifndef _4326231125_02_H
#define _4326231125_02_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define vB PB_P
# define xD PB_N
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define yI PB_M
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

