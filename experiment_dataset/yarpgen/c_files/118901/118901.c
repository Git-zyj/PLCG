/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 45619;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        var_12 *= -20;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 2751149156;
        var_13 *= var_4;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_14 *= (arr_8 [9]);
        arr_10 [i_2] = 22;
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_15 = (max(var_15, (!var_4)));

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_19 [i_5] [i_3 + 2] = 19936;
                arr_20 [i_3] [i_4] [i_5] = (~22);
                var_16 = (arr_0 [i_3 + 3]);
                var_17 = (arr_1 [i_5]);
                arr_21 [i_3] [1] [i_5] [i_3 + 3] = 1;
            }
            arr_22 [9] [i_4] [i_4] = (arr_16 [i_3]);

            /* vectorizable */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_18 = var_0;
                var_19 = 1146321140;
                var_20 ^= (arr_15 [i_3] [11] [i_6]);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_21 = 0;
                var_22 = (arr_13 [i_3]);

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_32 [i_3] [i_7] = (arr_25 [11]);
                    var_23 *= (~19955);
                }
                var_24 += 1;
            }
        }
    }
    #pragma endscop
}
