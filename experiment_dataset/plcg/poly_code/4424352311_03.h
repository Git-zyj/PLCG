#ifndef _4424352311_03_H
#define _4424352311_03_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define wG PB_Q
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define xN PB_N
# define xO PB_M
# define xP PB_L
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

