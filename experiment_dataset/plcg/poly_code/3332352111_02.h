#ifndef _3332352111_02_H
#define _3332352111_02_H
/* params start */
# define PB_M 30
# define PB_L 50
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_L
# define xI PB_M
# define yI PB_L
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

