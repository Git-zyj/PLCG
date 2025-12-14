/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (min((arr_0 [i_0]), (((arr_3 [i_0]) ? (arr_1 [i_0]) : 1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_16 = 1;
                        var_17 = (((((((var_3 ? var_4 : -77))) <= var_3)) ? (((arr_12 [i_2] [i_2 - 2] [i_2] [i_3] [i_3] [i_3]) ? (arr_12 [i_1] [i_2 - 1] [i_2] [i_2] [7] [i_3]) : (arr_10 [i_1] [i_2 + 1] [9] [i_3 - 2]))) : (((((arr_8 [0] [i_2 + 1] [i_2 - 2] [i_1]) > 1))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_18 [i_4] = ((-13 ? -620579547273558305 : 1));
            arr_19 [i_4] [i_0] [i_4] = ((127 ? ((-5912 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [1] [8]))) : (~var_6)));
            arr_20 [i_4] [i_4] [i_0] = (((((262128 > ((43358 ? var_2 : 22175))))) * (var_10 | var_4)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_25 [i_5] = (arr_10 [i_0] [2] [i_0] [i_0]);
            arr_26 [8] [i_0] [i_5] = (((4381691784212289603 / -22048) ? (arr_8 [i_5] [i_0] [i_0] [i_5]) : (arr_22 [i_5] [i_5])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_29 [i_6] = ((((273122883 ? (arr_28 [i_0] [7] [i_6]) : (arr_6 [i_0] [i_6] [i_0] [i_0]))) == (arr_3 [i_6])));
            var_18 = ((43358 ? 14065052289497262010 : var_13));
        }
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_19 = ((((((arr_30 [i_7]) ? (arr_30 [i_7 + 2]) : 4227858432))) ? (((((16 ? 12582912 : var_9))) ? ((64 ? var_11 : var_8)) : ((((arr_31 [i_7 + 1]) != var_10))))) : ((-126 ? var_4 : (((arr_31 [i_7]) ? 41495 : 1))))));
        var_20 = 98;
    }
    var_21 = var_5;
    #pragma endscop
}
