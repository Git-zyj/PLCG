#ifndef _4434311225_07_H
#define _4434311225_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_P
# define xD PB_L
# define yD PB_P
# define zD PB_P
# define vD PB_Q
# define wD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
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

