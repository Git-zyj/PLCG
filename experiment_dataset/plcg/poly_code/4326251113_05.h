#ifndef _4326251113_05_H
#define _4326251113_05_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xC PB_M
# define yC PB_Q
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define yF PB_N
# define zF PB_M
# define vF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_N
# define yJ PB_N
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

