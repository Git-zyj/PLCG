#ifndef _4326352111_00_H
#define _4326352111_00_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
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

