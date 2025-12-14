#ifndef _4432132321_07_H
#define _4432132321_07_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define vB PB_L
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_P
# define vF PB_Q
# define wF PB_Q
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define vG PB_M
# define xH PB_M
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

