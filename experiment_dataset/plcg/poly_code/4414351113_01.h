#ifndef _4414351113_01_H
#define _4414351113_01_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_L
# define yB PB_P
# define zB PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define xE PB_M
# define xF PB_L
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define xL PB_L
# define yL PB_P
# define xM PB_L
# define yM PB_L
# define xN PB_M
# define yN PB_L
# define zN PB_Q
# define vN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_P
# define xP PB_M
# define yP PB_M
# define zP PB_L
# define vP PB_P
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

