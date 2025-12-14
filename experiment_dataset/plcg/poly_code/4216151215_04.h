#ifndef _4216151215_04_H
#define _4216151215_04_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_L
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_P
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

