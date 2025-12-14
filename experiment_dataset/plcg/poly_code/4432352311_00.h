#ifndef _4432352311_00_H
#define _4432352311_00_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define xB PB_M
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define yF PB_M
# define xG PB_M
# define yG PB_P
# define zG PB_P
# define xH PB_M
# define yH PB_M
# define xI PB_N
# define xJ PB_N
# define xK PB_M
# define yK PB_M
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define xM PB_N
# define yM PB_M
# define zM PB_P
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define vN PB_Q
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

