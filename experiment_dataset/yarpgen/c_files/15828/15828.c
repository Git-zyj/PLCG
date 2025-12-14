/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ? (((1229499423286715905 > (arr_1 [i_0 - 3])))) : (~var_5)));
        var_13 = (max(var_13, ((((((54 - (arr_1 [i_0 - 2])) ^ (var_6 >= var_0))))))));
    }
    var_14 &= ((var_8 & (((1229499423286715917 & var_0) ? (24 / var_8) : 89))));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [6] &= (((((var_4 >= -55) & ((var_4 ? (arr_4 [i_1]) : 1229499423286715916))))) ? (((var_0 ^ 20) | ((17217244650422835699 ? 17217244650422835699 : -195312868859229903)))) : (~4594));
        var_15 = (((((var_9 & (arr_4 [i_1])))) ? ((max(4849, 1))) : ((((arr_4 [i_1]) >= var_12)))));
        var_16 -= ((var_2 / ((((var_1 <= var_8) / (!var_1))))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_17 = (max(var_17, (((4294836224 * (arr_3 [i_2]))))));
            arr_8 [i_1] = ((((((arr_4 [i_1]) && (arr_4 [i_1])))) << (var_9 - 1502)));
            var_18 -= ((-(arr_3 [i_2])));
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_4] [i_5] [i_3] = (max(((((((arr_0 [i_5 - 2]) & var_3)) * (1 * 0)))), (((var_11 - var_1) ? (arr_10 [i_3] [i_3]) : var_5))));
                    var_19 = (((((((-(arr_20 [i_5 - 1] [i_4]))) - ((max(var_8, (arr_18 [i_3] [i_4] [i_5 + 1] [i_5 - 1]))))))) + (((((arr_13 [i_3]) & 17217244650422835709)) >> (((max(var_4, var_11)) - 997909177))))));
                    arr_22 [i_5] [i_5 - 2] [i_4] [i_5] &= (arr_11 [i_3] [i_4]);
                    arr_23 [i_3] [i_4] [i_5 - 1] = ((((((189 & var_5) ? 8972192366277248557 : var_3))) & (((((arr_19 [i_3] [i_4] [i_4] [i_4]) & var_9)) / (((var_6 ? var_10 : var_10)))))));
                }
            }
        }
    }
    #pragma endscop
}
