#ifndef _3434352125_00_H
#define _3434352125_00_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 50
# define PB_P 30
# define PB_Q 50
/* params end */
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define xB PB_M
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define xJ PB_N
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define xM PB_N
# define yM PB_N
# define zM PB_L
# define vM PB_P
# define xN PB_L
# define yN PB_P
# define zN PB_Q
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

