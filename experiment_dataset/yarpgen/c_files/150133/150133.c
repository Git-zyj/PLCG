/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 = 557;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_20 = ((64985 + (64978 ^ 551)));
        arr_4 [i_1] [i_1] = 575;
        var_21 = (arr_3 [i_1] [i_1]);
        var_22 = (arr_2 [i_1] [i_1]);
        arr_5 [i_1] [i_1] = arr_2 [i_1] [i_1];
    }
    var_23 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_16 [1] [1] [i_4] = (arr_12 [i_2] [i_5] [i_4] [i_2] [i_2]);
                        var_24 = (max(var_24, 64985));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_25 -= (arr_18 [10] [i_4] [i_6]);
                        arr_20 [i_2] [i_2] [i_3] [i_2] [i_6] [i_6] = ((((557 <= 64973) ^ (arr_13 [i_2] [i_2] [i_4]))));
                        arr_21 [i_6] [i_6] [i_4] [i_6] = 551;
                        var_26 -= 64985;
                    }
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        arr_24 [i_7] [i_3] = (arr_10 [1] [i_4] [1]);
                        arr_25 [i_2] [i_3] [i_7 - 2] [i_4] [i_2] = (arr_1 [i_2]);
                    }
                    arr_26 [i_2] [i_3] [i_4] [i_4] = (arr_11 [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
