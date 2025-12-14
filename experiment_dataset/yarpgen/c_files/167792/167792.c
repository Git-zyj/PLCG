/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 -= (((min((arr_1 [i_0]), (arr_1 [i_0]))) << ((((~(arr_1 [i_0]))) - 1302629891))));
        arr_4 [i_0] [i_0] = ((-(arr_0 [i_0])));
        var_19 = (max(var_19, (((max((var_10 ^ var_3), var_10))))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1 + 2] = (((arr_5 [i_1 + 1] [i_1 + 2]) * (arr_5 [1] [i_1 + 1])));
        arr_9 [i_1] [11] = ((27134 ? 1 : (~var_16)));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_20 = 9223372036854775807;

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_21 ^= (((arr_13 [i_1] [i_2] [i_3]) ? var_12 : (arr_14 [i_1 + 2] [i_3] [i_2 + 1])));
                arr_15 [11] [1] [i_2 + 3] [12] = (!9223372036854775807);
                arr_16 [i_1] [11] [1] = (arr_5 [i_2 + 2] [i_1 + 1]);
                arr_17 [i_1] [i_1] [i_1] [i_1 - 1] = 153;
            }
            arr_18 [i_1] [i_1] = var_12;

            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_27 [i_1 - 1] [i_2 + 1] [15] [i_5] = ((845707951 ? 4206510208 : 4206510208));
                        arr_28 [i_1] [i_2] [i_4 - 1] [i_5] [i_5] [i_6] [i_6] = 88457087;
                        var_22 += 2108126611425152486;
                    }
                    arr_29 [i_5] [i_4] [14] [i_2] [i_2 + 3] [i_1] &= (arr_11 [1] [i_4 + 1] [i_4 + 1]);
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    arr_34 [10] = (!-680);
                    var_23 = (min(var_23, (arr_20 [i_1] [i_7 - 1] [i_4 - 1])));
                }
                arr_35 [8] [i_2] [i_1] [i_1 + 1] = var_12;
                var_24 = (max(var_24, (arr_19 [i_1 - 1])));
                arr_36 [i_1] [i_2] [4] [i_2] = (!4206510213);
            }
            arr_37 [i_1] [i_2] = (arr_12 [i_2 + 1] [i_1 + 2] [i_1 - 1]);
        }
    }
    var_25 = -209450494;
    #pragma endscop
}
