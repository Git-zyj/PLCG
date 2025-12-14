/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 1] &= ((4194272 ? ((-67 ? -455693370 : -455693378)) : -455693388));
        var_17 = (min(var_17, 4194272));
        var_18 = -114;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    var_19 -= var_9;
                    var_20 = ((1771129278 ? (-127 - 1) : -114));
                    var_21 = (arr_0 [i_1]);
                }
            }
        }
        var_22 *= (57839 ? (arr_5 [i_1] [10]) : ((((((min(var_7, 28108))) && ((!(arr_3 [i_1]))))))));
        arr_11 [i_1] = (min(((((((arr_0 [i_1]) ? (arr_0 [i_1]) : var_4))) ? ((var_14 ? (arr_3 [13]) : -125)) : ((((arr_8 [i_1]) ? (arr_10 [i_1] [0] [1]) : -1771129279))))), ((max((!54), (!var_14))))));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_23 = (max(var_23, ((((((((arr_9 [i_4] [i_4] [i_4] [i_4]) != (arr_9 [i_4] [i_4] [i_4] [i_4]))))) / (((arr_9 [i_4] [i_1] [i_1] [i_4]) ? (arr_9 [i_4] [i_1] [i_1] [i_4]) : (arr_9 [i_4] [i_4] [i_4] [i_4]))))))));
            var_24 = (arr_9 [i_1] [i_4] [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 = var_5;
            var_26 = (min(var_26, ((((arr_13 [1]) ? (arr_13 [4]) : 1)))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = -1684321522;
                        var_27 = (min(var_27, ((((arr_13 [1]) || -12)))));
                        var_28 -= ((var_11 ? 12952334 : ((-46 ? 1 : 0))));
                        var_29 += -455693370;
                    }
                }
            }
        }
    }
    var_30 = -88;
    #pragma endscop
}
