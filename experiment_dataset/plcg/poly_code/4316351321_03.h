#ifndef _4316351321_03_H
#define _4316351321_03_H
/* params start */
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_M
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define xD PB_M
# define xE PB_M
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define vG PB_Q
# define wG PB_Q
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define vI PB_Q
# define xJ PB_L
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

