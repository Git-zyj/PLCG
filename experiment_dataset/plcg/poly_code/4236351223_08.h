#ifndef _4236351223_08_H
#define _4236351223_08_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_P
# define xC PB_N
# define yC PB_M
# define xD PB_N
# define yD PB_L
# define xE PB_L
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
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

