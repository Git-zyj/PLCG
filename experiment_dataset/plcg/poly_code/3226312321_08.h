#ifndef _3226312321_08_H
#define _3226312321_08_H
/* params start */
# define PB_M 50
# define PB_L 40
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_Q
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

