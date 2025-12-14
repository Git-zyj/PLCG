/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((~((max(-51, (arr_1 [i_0 - 1]))))));
        var_17 *= 153;
        var_18 = ((((min(15, var_15))) ? (238 * var_10) : ((max(255, (arr_1 [i_0 - 1]))))));
        var_19 |= ((((max(56236, 9223372036854775807))) ? (max(9315, (min(var_14, 8430318261637070422)))) : ((((((min(var_14, var_11))) || 10016425812072481194))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((min(var_14, 8430318261637070413))))));
                    var_21 *= (min(((8430318261637070418 ? ((var_4 ? var_10 : var_14)) : ((-(arr_4 [2] [i_1] [i_1]))))), (((~9276) | ((max((arr_1 [i_0]), 0)))))));
                    arr_8 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                    var_22 = ((((max((max((arr_7 [9] [i_0] [i_1]), var_1)), ((max(var_15, var_9)))))) ? (arr_0 [8] [i_2]) : 1));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        arr_11 [i_3] = ((-((var_11 ? var_14 : var_13))));
        var_23 = (min((arr_10 [i_3] [i_3 - 1]), ((((65535 ^ 221) != (arr_10 [i_3] [9]))))));
        arr_12 [i_3] = var_16;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_24 = (~1);
        var_25 += ((((arr_13 [i_4]) && var_8)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [i_6] = var_4;
                    arr_20 [i_4] [i_4] &= var_9;
                    var_26 = (min(var_26, ((((arr_17 [2] [i_4] [i_4]) * var_3)))));
                }
            }
        }
        arr_21 [3] [i_4] |= (arr_13 [i_4]);
    }
    var_27 = (max(((max(0, var_0))), (max((~var_14), var_5))));
    #pragma endscop
}
