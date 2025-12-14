/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 ^= (((min(10850794259188957847, 1)) << (((min(-4576, -4857951784440379363)) + 4857951784440379390))));
        arr_4 [i_0] = ((+(((arr_0 [12] [i_0 + 1]) ? (arr_0 [i_0] [i_0 + 2]) : (arr_0 [i_0] [i_0 - 1])))));
        var_19 = ((((!(arr_1 [i_0 + 2] [i_0 + 1]))) ? var_2 : 0));
        var_20 ^= (-9007769947391733724 & 30310);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (arr_6 [i_1]);
        var_22 = (((((arr_5 [i_1] [i_1]) + 2147483647)) << (((-3878 + 3901) - 23))));
        arr_8 [i_1] = ((~(arr_7 [i_1])));
        var_23 = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = ((!((((arr_5 [i_2] [i_2]) & (arr_5 [14] [i_2]))))));
        var_24 = (((!30311) != -0));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                var_25 = ((-(((arr_16 [i_4 + 1] [i_4 + 1]) ? (arr_16 [i_4 - 1] [i_4 + 1]) : (arr_16 [i_4 + 1] [i_4 + 1])))));
                var_26 = (max((min((((1 ? var_9 : 0))), -9007769947391733724)), (-9007769947391733747 / -1924)));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_22 [i_2] [i_2] [i_2] [i_2] = 0;
                arr_23 [1] [i_3] [i_3] = (!1);
                var_27 = (max(var_27, ((((((~27874) + 9223372036854775807)) << ((((((~(arr_14 [i_2]))) + 48)) - 47)))))));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_28 = (((arr_14 [i_2]) << (var_9 + 833)));
                arr_28 [i_2] [i_6] = ((((arr_6 [i_6]) / (arr_15 [i_6] [i_6] [i_3] [i_2]))) ^ -var_16);
                var_29 = ((((min((arr_16 [i_6] [i_2]), 1))) ? (((arr_16 [i_3] [i_6]) | (arr_7 [i_3]))) : (arr_9 [i_2] [i_3])));
                var_30 = (arr_25 [7]);
                var_31 = min((arr_10 [i_6]), (((arr_9 [i_2] [i_2]) / (arr_9 [i_2] [i_3]))));
            }
            arr_29 [i_2] = ((!(((((-4576 ? 4092 : 0)) | (((arr_9 [i_3] [15]) ^ (arr_20 [i_2] [i_2] [i_3] [i_3]))))))));
        }
    }
    #pragma endscop
}
