#ifndef _4424351111_03_H
#define _4424351111_03_H
/* params start */
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_L
# define yB PB_Q
# define zB PB_Q
# define vB PB_Q
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define vC PB_Q
# define xE PB_L
# define yE PB_Q
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_P
# define xM PB_M
# define yM PB_M
# define zM PB_L
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

