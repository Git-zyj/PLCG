#ifndef _4236231215_02_H
#define _4236231215_02_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define wD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
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

