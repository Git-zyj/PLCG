/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_4, ((min(1, (!var_14))))));
    var_17 = (max(var_17, (((-(~-2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_3 [i_0])));
        arr_4 [i_0] = var_12;
        arr_5 [i_0] = 2;
        var_19 |= (((-(arr_2 [i_0]))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_20 = (min(-2, (!49510)));
        var_21 = (arr_7 [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_22 += 2;
            var_23 = (min(var_23, (-9223372036854775807 - 1)));
        }
        var_24 = (max(var_24, ((min((arr_9 [4] [i_2]), (min((arr_9 [12] [i_2]), 86)))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_2] [i_5 - 2] [i_4 - 1] [i_2] = (arr_15 [i_2] [i_2] [i_2] [i_2]);

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_25 = (min(var_25, (arr_6 [i_2])));
                        var_26 *= (!var_13);
                        var_27 = (max((1 >> 13), 2545863064));
                    }
                    arr_22 [i_4] [i_2] = (~1);
                }
            }
        }
        arr_23 [i_2] = (!var_0);
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_28 -= ((~((max(var_12, (arr_12 [i_7] [i_7] [i_7]))))));
        arr_26 [i_7] [i_7] = 8321223544746844529;
    }
    var_29 = (max((~1), (max((~20), ((min(-70, 2)))))));
    #pragma endscop
}
