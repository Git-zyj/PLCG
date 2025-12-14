#ifndef _4332332123_05_H
#define _4332332123_05_H
/* params start */
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define vA PB_P
# define wA PB_P
# define xB PB_L
# define yB PB_Q
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_L
# define yD PB_P
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_M
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
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

