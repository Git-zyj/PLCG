/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_18 = (((arr_0 [i_0 + 1] [i_0]) != (arr_0 [i_0 - 2] [i_0])));
        var_19 = ((arr_0 [i_0 - 1] [i_0]) & (arr_0 [i_0 - 1] [i_0]));
        var_20 -= (arr_1 [i_0 - 2]);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_7 [i_1] = var_4;
            arr_8 [i_1] [i_1] [i_1] = (((arr_2 [i_1]) ^ (max(var_10, (arr_0 [i_1] [i_1])))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_12 [9] [i_4 - 1] [i_3] [i_1 + 1] [i_3 + 3])));

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_4] [i_2] [i_1] = (arr_1 [i_1]);
                            var_22 = (arr_15 [i_1] [i_3 - 1] [6] [i_3] [i_3 - 1]);
                            var_23 = (max(var_23, (arr_12 [i_2] [i_2] [i_2] [i_3 - 1] [i_5])));
                        }
                        var_24 = (min((arr_9 [i_2]), (arr_3 [i_1])));
                        arr_18 [i_1] [i_1] [i_1] [i_4] = ((((((arr_16 [i_3] [i_3] [i_3 + 1] [i_3 + 3] [i_3]) * (arr_16 [i_4] [i_4] [i_4] [i_3 + 3] [i_3])))) - var_6));
                    }
                }
            }
            var_25 += (arr_6 [i_1] [i_2]);
        }
        arr_19 [i_1] = var_8;
    }
    var_26 = var_11;
    #pragma endscop
}
