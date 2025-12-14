#ifndef _4424351215_04_H
#define _4424351215_04_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xB PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_M
# define vF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_P
# define xH PB_L
# define yH PB_L
# define xI PB_M
# define xJ PB_L
# define yJ PB_L
# define xK PB_L
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define xN PB_N
# define yN PB_M
# define xO PB_M
# define yO PB_L
# define zO PB_P
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

