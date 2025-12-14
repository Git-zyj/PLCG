#ifndef _4322252325_08_H
#define _4322252325_08_H
/* params start */
# define PB_N 50
# define PB_M 30
# define PB_L 30
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_P
# define xD PB_N
# define xE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_Q
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

