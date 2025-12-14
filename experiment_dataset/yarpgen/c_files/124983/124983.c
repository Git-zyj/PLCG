/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (arr_8 [i_0] [i_1] [i_1] [i_2]);
                    arr_10 [i_0] [i_1] [1] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 0));
                    var_21 = ((var_12 ? ((((((-(arr_0 [i_2])))) ? -var_18 : var_19))) : (arr_5 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    var_22 = (-(var_6 * var_14));
    var_23 = ((var_8 * (max((~39), ((min(1, 1)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_24 *= ((min(var_0, (var_14 * 0))));
                var_25 *= (max((((arr_12 [i_3] [i_4]) >> ((max(1, var_19))))), var_17));
                var_26 -= -470744612975375548;
                var_27 = (min(var_27, (((((((var_8 | (arr_12 [i_3] [i_4])))) ? (((-1 ? 205 : 5949))) : (((arr_11 [i_4]) ? (arr_12 [i_4] [i_4]) : -30))))))));
            }
        }
    }
    #pragma endscop
}
