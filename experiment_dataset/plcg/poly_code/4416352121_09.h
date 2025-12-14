#ifndef _4416352121_09_H
#define _4416352121_09_H
/* params start */
# define PB_M 40
# define PB_L 40
# define PB_P 50
# define PB_Q 50
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_L
# define xD PB_L
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define vK PB_L
# define xL PB_M
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
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

