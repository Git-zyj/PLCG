/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min((var_6 == 1), var_9)), ((var_5 ? var_8 : 48))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (144 + 65535);
        arr_3 [i_0] = var_7;
        var_11 = ((((arr_1 [i_0] [i_0]) ? 1141800263 : 64866)));
        arr_4 [i_0] = (min(((~(var_4 & 84))), ((((var_1 || var_0) << (-815506061 + 815506071))))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_12 = (((((127 ? 815506061 : 1))) || ((((arr_1 [18] [18]) ^ 1)))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2] [i_3] = (((((arr_12 [i_2 + 1] [i_1 - 3]) >= (var_1 == var_5))) && (((var_6 >> (var_9 - 1657955877))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_13 = ((-((((min((arr_12 [i_3] [i_2 - 1]), 35865))) ? (35865 >= 13956615079788189876) : 48472))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_4] [i_4] [20] [i_4] [i_4] [i_2] = ((arr_0 [i_5 - 1]) & 65521);
                            arr_20 [i_4] [i_5] [i_5] [i_4] [i_3] [i_1] [i_4] = ((760581611 && (arr_6 [i_1] [i_2])));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1 + 1] [i_2] [0] [i_4] [i_2] = var_1;
                            arr_24 [i_1] [i_4] [i_1] [i_3] [i_4] [i_6] = ((((~(arr_22 [i_1] [0] [i_1] [i_1] [0]))) & -1198630802));
                            arr_25 [13] [i_4] [i_4] [i_3] [i_4] [i_1 - 3] [i_1] = -1;
                        }
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_14 = (-2133367755 - 2147483647);
                        arr_28 [i_2] [i_2] [i_3] [i_7] [i_3] [16] = (24791 + var_2);
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_15 = -var_3;
        var_16 = (min((((((((arr_26 [12] [12] [i_8 - 3] [i_8] [19] [i_8]) || var_6))) ^ (arr_27 [i_8 - 1] [i_8])))), (arr_8 [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = (~var_3);
        var_17 = -0;
        arr_34 [i_9] = ((var_6 < (arr_32 [i_9])));
        var_18 = 0;
    }
    #pragma endscop
}
