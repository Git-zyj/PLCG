#ifndef _4412351321_00_H
#define _4412351321_00_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_M
# define zB PB_P
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_M
# define xG PB_M
# define xH PB_M
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_N
# define yJ PB_L
# define zJ PB_L
# define xK PB_M
# define xL PB_M
# define xM PB_M
# define yM PB_M
# define zM PB_L
# define vM PB_P
# define xN PB_L
# define yN PB_L
# define zN PB_L
# define vN PB_P
# define xO PB_M
# define yO PB_P
# define zO PB_Q
# define vO PB_Q
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

