#ifndef _4426351315_06_H
#define _4426351315_06_H
/* params start */
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_L
# define yB PB_P
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define xL PB_M
# define yL PB_L
# define xM PB_M
# define yM PB_L
# define xN PB_M
# define yN PB_M
# define zN PB_P
# define vN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_Q
# define xP PB_M
# define yP PB_L
# define zP PB_P
# define vP PB_Q
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

