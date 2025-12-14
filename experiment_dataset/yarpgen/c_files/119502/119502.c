/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_3] = ((((65535 ? (16734 && -3911833155065659001) : 0))) ? var_8 : ((((((arr_5 [i_0] [i_1] [12]) ? var_4 : -3539484799570845402))) ? ((var_10 ? var_0 : 3)) : (18695 & var_8))));

                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_3] |= (((arr_11 [i_3] [i_3] [i_3] [i_2] [i_3] [1] [i_3]) ? (arr_0 [i_0]) : ((12 ? 1125899906711552 : 61782))));
                            arr_13 [i_0] [12] [12] [12] [12] = (arr_7 [4] [11] [14] [17] [13]);
                            arr_14 [17] [i_2] [15] [2] = var_8;
                            var_14 = ((145 + (max(((var_10 ? var_7 : 109)), (((var_9 < (arr_11 [i_0] [13] [i_1] [i_2] [2] [5] [i_0]))))))));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_15 = var_11;
                            var_16 = (max(var_16, (((((((145 ? -6052097852543010663 : var_9)) & var_3)) != (((~(arr_5 [i_1] [4] [i_5])))))))));
                        }
                        var_17 = ((~(((arr_5 [i_1] [i_0 + 3] [i_0 + 3]) - -6169466182614717700))));
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] = 3;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_18 = (((!26026) != (((38938 ^ 58482) ^ ((var_4 ? var_7 : (arr_22 [i_6] [i_6])))))));
        arr_24 [i_6] = ((52567 ? 25142 : 60471));
        var_19 = ((((((arr_0 [i_6]) / ((var_12 ? 30930 : 17287))))) ? (arr_10 [i_6] [i_6] [8] [i_6] [i_6]) : 38493));
    }
    var_20 ^= var_13;
    #pragma endscop
}
