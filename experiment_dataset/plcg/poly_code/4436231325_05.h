#ifndef _4436231325_05_H
#define _4436231325_05_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define vI PB_P
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

