/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 *= (((((-(~var_2)))) ? ((((((var_8 + 9223372036854775807) >> (((arr_5 [i_1] [i_0]) + 5174997355589039025))))) ? ((var_6 ? 2021275246 : var_5)) : var_1)) : ((-((-1 ? var_4 : var_7))))));
                var_11 = ((~((~(!576460752303423487)))));
                arr_6 [i_0] [i_0] [i_1] = (((!-7572050855998594169) ? ((((var_3 ? (arr_4 [i_0]) : var_7)) / (arr_5 [i_0] [0]))) : (((((-6644220588089222676 ? 0 : (arr_4 [i_1])))) ? (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) : ((6836282290616879919 / (arr_1 [i_1] [i_0])))))));
                var_12 = ((((~(((!(arr_0 [i_0]))))))) ^ (~var_8));
                arr_7 [i_0] [i_0] [i_0] = ((((7572050855998594176 ? ((5107936017589489522 ? 2369910158 : -7)) : (8150781161671660079 > 5)))) ? 7572050855998594169 : 2320360509);
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
