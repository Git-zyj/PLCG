#ifndef _3436312325_08_H
#define _3436312325_08_H
/* params start */
# define PB_N 50
# define PB_M 30
# define PB_L 40
# define PB_Q 40
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_Q
# define xD PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_M
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define xH PB_M
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

