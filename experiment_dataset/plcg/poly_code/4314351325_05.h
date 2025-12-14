#ifndef _4314351325_05_H
#define _4314351325_05_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define vB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_N
# define yF PB_N
# define zF PB_N
# define vF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_Q
# define wG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
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

