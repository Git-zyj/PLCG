/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_13);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (arr_1 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_17 = (((arr_3 [i_0] [i_1] [i_2]) | 1));
                var_18 = (arr_1 [i_0] [i_1]);
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_10 [i_1] [i_1] = ((arr_6 [i_1]) ? (arr_9 [i_0] [i_1] [i_3] [i_0]) : ((-(arr_4 [i_1]))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 = (min(var_19, (((var_4 / (arr_5 [i_0] [i_1] [i_4]))))));
                    var_20 = ((arr_8 [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4]) : (arr_13 [i_4] [i_3] [i_3] [i_1] [i_1] [i_0]));
                    var_21 = (max(var_21, (arr_7 [i_4] [i_3])));
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_22 = (arr_12 [i_0] [i_0] [i_1] [i_3] [i_0]);
                    var_23 = (!(arr_9 [i_5 + 1] [i_5] [i_5 + 1] [i_5]));
                }
            }
        }
        arr_18 [i_0] = (min(1, 28007));
        var_24 = ((((((arr_6 [i_0]) ^ var_3))) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_19 [i_0] [i_0] = (arr_4 [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        var_25 = (arr_11 [i_6] [i_6 + 1] [i_6] [i_6]);
        arr_22 [i_6] = (arr_0 [i_6 - 2]);
    }
    var_26 = var_2;
    #pragma endscop
}
