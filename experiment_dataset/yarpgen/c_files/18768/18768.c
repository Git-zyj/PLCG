/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!2476996977491723010);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0 + 2]) ? 2476996977491723013 : (arr_1 [i_0]))) & var_14));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [12] [14] = (arr_1 [i_1]);
            arr_8 [i_0 + 3] [i_0] = (33554431 - 2138540013);

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                arr_12 [i_0] = (arr_9 [i_0] [13] [i_0]);
                arr_13 [i_0 + 3] [i_1] [i_0] = (2138540013 && 2156427282);
                arr_14 [i_0 + 3] [i_1] [i_2 + 1] [i_0] = (((((1 ? var_15 : -1152921504606846976))) ? 6 : ((var_6 ? (arr_0 [i_1]) : (arr_11 [i_0 + 3] [i_0])))));
            }
            arr_15 [i_0] = ((8388607 ? 14 : 127));
        }
        arr_16 [i_0] = 4261412864;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_24 [i_0 + 3] [6] [i_0] [i_5 + 2] [i_4 + 4] [i_3] = ((((1 ? (arr_4 [i_3 - 1] [i_3] [i_3 - 1]) : -1)) << (((arr_0 [10]) - 13949188759925123130))));
                        arr_25 [i_0] [i_5] [i_0] = 0;
                        arr_26 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] = var_11;
                        arr_27 [i_0] [i_3] [i_4 + 3] [i_0] = (((((2476996977491723034 != (arr_17 [0] [0] [i_4 + 1])))) != (arr_21 [i_0 + 2] [i_5 - 2] [i_0])));
                        arr_28 [i_0] [i_3 - 1] [i_4 + 3] [i_5 + 3] = 15969747096217828616;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        arr_32 [i_6] = (arr_4 [i_6 - 1] [i_6 + 2] [i_6 + 1]);
        arr_33 [i_6] [i_6 + 2] = (arr_29 [i_6]);
    }
    var_17 = ((1 ? (((max(var_7, (-127 - 1))))) : (888365647 == -1151084958)));
    var_18 = -19;
    #pragma endscop
}
