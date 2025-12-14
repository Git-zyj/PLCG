#ifndef _4314352115_00_H
#define _4314352115_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define vD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_L
# define yG PB_Q
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

