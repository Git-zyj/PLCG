/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((36479 < 13799) * var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            var_20 = arr_11 [i_1];
                            var_21 = (((((arr_9 [i_1]) <= (arr_8 [i_3] [i_2] [17] [13]))) || (arr_0 [i_1 - 2] [i_1 + 3])));
                            arr_13 [i_0] [i_0] [7] [i_0] [i_4 - 3] = (arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]);
                        }
                        arr_14 [i_3] = ((-(arr_5 [i_1 - 1])));
                        arr_15 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_2]);
                        arr_16 [i_0] [i_1 - 3] [i_2] [i_0] = (~13799);
                    }
                }
            }
        }
        var_22 = (arr_9 [i_0]);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_23 = ((+(((arr_2 [i_5]) ? (arr_2 [i_5]) : (arr_2 [i_5])))));
        var_24 = (((arr_8 [i_5] [i_5] [i_5] [i_5]) ? ((13799 ? (arr_7 [i_5] [i_5] [i_5] [i_5]) : (arr_6 [i_5] [i_5] [i_5] [3]))) : (arr_6 [i_5] [i_5] [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6] = (0 + 3351961345);
        var_25 = ((48394 ? 51736 : -52679));
        arr_24 [i_6] = ((~((((arr_2 [i_6]) < (arr_2 [i_6]))))));
    }
    var_26 -= 17141;
    #pragma endscop
}
