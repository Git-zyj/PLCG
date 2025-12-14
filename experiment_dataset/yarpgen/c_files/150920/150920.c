/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((5714243908579054485 >= var_5) ? (min(var_7, 1028479232229775387)) : ((var_10 ? 0 : var_1))))) ? ((((8584543432478085980 ? var_10 : var_3)))) : (((((100 ? 1 : var_2))) ? (((var_1 ? var_1 : 53532))) : var_5))));
    var_12 = (((((3612525642984680196 << (((62316 % 10042428237841853337) - 62315))))) ? -3612525642984680196 : var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (((var_9 * 255) ? ((((1 == (arr_0 [i_0]))))) : ((var_9 ? (arr_0 [i_0]) : var_8))));
        arr_3 [i_0] = -64;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (max(var_14, ((((arr_6 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_2 [i_1]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_15 = (((((arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]) >= (arr_7 [i_1] [i_0] [i_2]))) ? var_1 : (((-9223372036854775807 - 1) ? var_4 : (arr_15 [i_0] [i_1] [i_2] [i_3 + 2] [i_0])))));
                            arr_16 [i_4 + 1] [i_1] [i_2] [i_1] [i_0] = var_1;
                            arr_17 [i_2] [i_2] [i_2] [i_1] [i_0] = var_6;
                        }
                    }
                }
            }
        }
        arr_18 [i_0] |= (((((var_6 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((9862200641231465636 << (var_5 - 18083700289295254517))) : ((var_9 ? var_5 : -3612525642984680217))));
        arr_19 [i_0] = (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_24 [14] = (min((((arr_4 [i_5]) ? ((((arr_14 [i_5] [i_5]) * 1697903383))) : (arr_0 [i_5]))), ((min((arr_6 [i_5]), var_8)))));
        arr_25 [i_5] = ((((((1 == 8584543432478085980) + var_8))) ? ((((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) || (arr_7 [i_5] [i_5] [i_5])))) : ((1241173472 ? var_0 : (arr_4 [i_5])))));
    }
    #pragma endscop
}
