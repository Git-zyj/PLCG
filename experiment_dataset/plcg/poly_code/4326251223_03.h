#ifndef _4326251223_03_H
#define _4326251223_03_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_N
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_M
# define zE PB_M
# define vE PB_L
# define xF PB_M
# define xG PB_L
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

