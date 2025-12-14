#ifndef _4214152221_02_H
#define _4214152221_02_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_P
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define vB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define wE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
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

