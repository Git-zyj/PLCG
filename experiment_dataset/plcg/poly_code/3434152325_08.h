#ifndef _3434152325_08_H
#define _3434152325_08_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 50
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_N
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_N
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_Q
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

