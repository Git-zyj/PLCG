#ifndef _4226351321_02_H
#define _4226351321_02_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_L
# define yD PB_P
# define zD PB_P
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define wE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_Q
# define wG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_N
# define yI PB_N
# define zI PB_N
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

