#ifndef _3422351321_01_H
#define _3422351321_01_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 50
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define xH PB_N
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_L
# define yM PB_Q
# define xN PB_N
# define yN PB_N
# define zN PB_L
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

