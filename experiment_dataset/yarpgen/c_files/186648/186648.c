/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((22686 ? -9702 : -22686));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [4] = var_3;
                arr_10 [i_0] [i_1] [i_1] [i_2] = var_2;
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_19 = (min(var_19, ((((max((max(18407986568702763142, var_13)), 4278190080)) == var_14)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 *= (32 & (((((max(228, 228))) || (arr_0 [i_1 + 1])))));
                            arr_19 [14] [i_4] [i_3] [i_0] [i_0] = (!var_3);
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                arr_23 [i_0] [i_0] [i_6] = (((arr_17 [i_0] [i_1] [i_0]) ? var_0 : (240 >= var_6)));
                arr_24 [i_0] [14] [14] = ((((arr_21 [i_0] [i_6 + 1] [i_6]) << (((arr_12 [i_1] [i_1] [i_1 - 2] [i_1 - 2]) - 1482)))));

                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_21 = (((255 >= 9726) >> (115 || var_12)));
                    var_22 ^= 65522;
                }
            }
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                arr_30 [i_1] [i_0] [0] = (arr_12 [i_0] [i_1 - 1] [i_8] [i_1]);
                var_23 = (min(var_23, var_0));
                arr_31 [i_0] [19] [i_1] [i_0] = arr_18 [i_0] [0] [0] [0];
                arr_32 [i_0] [i_1] [i_8 + 1] &= -var_9;
            }
            arr_33 [i_0] [i_0] [i_1] = ((!((min(var_5, var_16)))));
            arr_34 [i_0] [i_1] = (((((arr_22 [i_0] [i_0] [i_0]) > -1283773738)) && var_14));
        }
        var_24 = (max(var_24, ((min(5790, (arr_1 [i_0]))))));
        arr_35 [i_0] [6] = (0 > (-127 - 1));
    }
    var_25 = var_6;
    var_26 = var_1;
    var_27 = var_2;
    #pragma endscop
}
