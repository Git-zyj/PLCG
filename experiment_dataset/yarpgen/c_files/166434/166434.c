/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [14] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 1569350987;
            arr_7 [i_1] [i_1] [12] = ((24 ? 16106127360 : 67817612));
            var_18 = (((arr_5 [i_1]) & ((((arr_3 [i_1] [i_1]) || 1317175365)))));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_12 [i_1] = (arr_11 [i_1 + 1] [i_1] [i_1 + 1]);
                var_19 &= ((arr_8 [i_1 + 1] [i_1 - 2]) && (arr_0 [i_1 - 1] [i_1 - 1]));
                var_20 = (max(var_20, ((((arr_8 [i_1 - 1] [i_1]) - (arr_0 [i_1 + 1] [i_1 + 1]))))));
                var_21 = (((arr_3 [i_1] [i_1 - 1]) + (arr_0 [i_1 - 1] [i_1 - 1])));
            }
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_22 &= (18446744057603424255 ? ((((arr_14 [18] [i_3]) || (arr_4 [10])))) : -67817606);
            var_23 *= (((arr_0 [i_3 - 1] [i_3]) ? (arr_0 [i_3 - 1] [i_3 - 1]) : 16106127349));
            var_24 = (max(var_24, 2977791909));
            var_25 = (~2102694058);
        }
    }
    var_26 ^= ((var_4 ? (((((((-67817598 ? 16106127358 : -8088))) || -var_3)))) : (((150 ? -102 : 10)))));
    #pragma endscop
}
