#ifndef _3412352313_00_H
#define _3412352313_00_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 30
# define PB_P 50
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define xD PB_M
# define xE PB_M
# define yE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_N
# define yG PB_N
# define xH PB_M
# define xI PB_M
# define xJ PB_N
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
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

