/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((((1019865528 != var_3) ? var_8 : (var_7 <= var_12)))) ? var_8 : ((var_5 ? (1 <= var_6) : var_13))));
    var_15 = 3275101777;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 *= ((~(~46732)));
                    var_17 = (((arr_6 [i_0] [i_1] [i_1] [i_2]) / 8));
                    var_18 = ((min(83718078664105674, (arr_3 [i_1]))));
                    var_19 = ((~(-1 & -9)));
                }
            }
        }
    }
    var_20 = ((((((((var_2 ? 205 : 14482))) ? 122 : -15))) ? ((((((0 ? 15434 : 3044712554096592063))) ? var_0 : (-17256 / var_4)))) : var_11));
    var_21 = (((+-39113) + var_2));
    #pragma endscop
}
