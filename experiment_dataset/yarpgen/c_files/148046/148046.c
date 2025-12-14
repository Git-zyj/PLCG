/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = ((-(arr_1 [i_1])));
            arr_7 [i_0] [i_0 - 1] [i_1] = (-((~(arr_1 [i_0 - 1]))));
            arr_8 [i_0] [i_0] = ((var_7 ? var_11 : (arr_0 [i_0 - 1] [i_0 - 1])));
            arr_9 [i_0 - 1] [i_0 - 1] = (arr_3 [20]);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_13 [i_2] = -686855902169975880;
            arr_14 [i_2] [i_2] [1] = (var_10 - (arr_12 [i_0 - 1] [i_0 - 1]));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_18 [i_0 - 1] = (~var_1);
            arr_19 [i_0] [i_0] = (arr_2 [i_0] [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_14 = ((~(arr_24 [i_0 - 1] [i_3] [i_4] [10])));
                        var_15 = ((-(((!(arr_2 [i_3] [i_0]))))));
                        var_16 = (~var_5);
                    }
                }
            }
        }
        arr_25 [i_0] = -var_2;
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_17 = var_12;
        var_18 *= (((((min((arr_28 [6]), (arr_20 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6]))))) >= (arr_16 [15] [i_6] [i_6])));
        arr_29 [i_6 + 1] [i_6 - 1] = ((!((((arr_4 [i_6 - 1]) ? var_4 : (arr_4 [i_6 - 1]))))));
    }
    var_19 = (!((((((var_3 ? var_9 : var_1))) ? (~var_10) : ((1 ? -15709 : 6952999986228725515))))));
    var_20 = var_10;
    #pragma endscop
}
