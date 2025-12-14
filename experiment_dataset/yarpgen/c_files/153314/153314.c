/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = var_14;
                    arr_7 [i_0] [i_0] = 39;
                }
            }
        }
        arr_8 [i_0] = (min((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))), ((min(111, 19)))));
        var_18 = -115;
        arr_9 [i_0] [i_0] = (((((8256 - (arr_6 [i_0] [i_0])))) > ((~(arr_2 [i_0] [i_0])))));
    }
    var_19 *= ((var_3 ? var_0 : (4294967290 <= 6)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_18 [i_4 - 1] [i_4] [i_4] [i_4 + 1] [i_4] [i_4] = -8257;
                            var_20 = 2942179806367639015;

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_21 = (min(var_21, 95));
                                arr_22 [i_3] [i_5] [i_7] [i_7] = (((127 + -127) + (arr_1 [i_3])));
                            }
                            for (int i_8 = 0; i_8 < 11;i_8 += 1)
                            {
                                arr_25 [i_3] [i_4 - 1] [i_5] [i_6 - 2] [i_8] = (~(~56));
                                var_22 += (((min(((var_10 ? 0 : 17083127432740156846)), (~-113))) - (((((((arr_19 [i_3] [10] [i_3] [i_3]) ? -127 : -96))) ? (max(-1529681168, 34)) : (arr_17 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                                arr_26 [i_3] [1] [i_3] [i_6 - 3] [1] = ((((64 > (((arr_3 [4]) ? 1 : 1)))) ? ((((arr_17 [i_3] [i_3] [i_3] [i_3] [9]) | (arr_3 [7])))) : (min((min((arr_12 [i_3]), var_15)), (min(1, 9097984407368129478))))));
                            }
                        }
                    }
                }
                arr_27 [i_3] [i_3] = ((((((arr_6 [i_3] [i_4]) ? (arr_6 [3] [i_3]) : (arr_24 [10] [10] [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) ? ((8256 << (((-64 < (arr_13 [i_4 - 1])))))) : ((((max(var_1, 67108864)) > var_11)))));
            }
        }
    }
    #pragma endscop
}
