#ifndef _4332151323_09_H
#define _4332151323_09_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define vC PB_L
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_L
# define wG PB_P
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

