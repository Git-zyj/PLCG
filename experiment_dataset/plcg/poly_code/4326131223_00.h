#ifndef _4326131223_00_H
#define _4326131223_00_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define vB PB_L
# define xC PB_M
# define yC PB_M
# define zC PB_P
# define vC PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_M
# define vH PB_L
# define wH PB_Q
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

