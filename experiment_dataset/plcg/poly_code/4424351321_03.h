#ifndef _4424351321_03_H
#define _4424351321_03_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define vA PB_Q
# define xB PB_L
# define yB PB_Q
# define zB PB_Q
# define xC PB_N
# define yC PB_N
# define zC PB_M
# define xD PB_N
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_N
# define yF PB_L
# define zF PB_L
# define xG PB_L
# define yG PB_L
# define zG PB_L
# define vG PB_P
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define xJ PB_N
# define yJ PB_M
# define zJ PB_P
# define xK PB_N
# define yK PB_M
# define xL PB_L
# define yL PB_Q
# define xM PB_M
# define xN PB_N
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

