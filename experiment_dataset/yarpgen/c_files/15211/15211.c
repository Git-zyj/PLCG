/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_0 [i_0 - 1]);
        arr_3 [i_0] = ((((~(~var_0))) | ((((max((arr_1 [i_0] [i_0 - 1]), var_1))) ? ((min(-98, var_6))) : var_0))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_9 [i_1] [i_1] = (((arr_2 [i_1]) >= (arr_7 [i_0] [i_0])));
                arr_10 [i_0] = var_0;
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_20 [i_5] = 43;
                        var_13 = ((((((((((arr_1 [3] [i_3]) ^ -49)) + 2147483647)) << (((((min(var_10, var_5)) + 7462333964328584842)) - 13))))) ? ((min(((216 << (((arr_12 [i_0] [i_0] [i_0]) + 23582)))), ((var_3 >> (63 - 63)))))) : ((((((arr_5 [i_4] [13]) ? (arr_14 [1] [1]) : (arr_14 [i_4] [6])))) | ((var_8 >> (((arr_18 [i_3] [i_1] [i_5] [13] [i_5] [9] [13]) - 6719440246238182125))))))));
                    }
                    var_14 = (arr_11 [i_0 + 3] [i_1] [i_0 + 3]);
                    var_15 += ((var_11 + ((var_0 - ((min(var_3, (arr_16 [i_3] [i_3]))))))));
                }
                arr_21 [1] [i_1] [i_0 - 3] = ((~(arr_0 [i_1])));
                arr_22 [6] [i_1] [i_0] = ((281470681743360 <= ((min((((arr_15 [i_1] [i_0 - 3] [i_1] [i_1] [i_1]) - var_9)), var_9)))));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                arr_26 [i_0 + 2] [i_0 - 1] [i_0 - 2] [i_0 - 2] = ((471552105 ^ (((~var_4) * (((-(arr_24 [i_0] [i_1] [i_1]))))))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_29 [1] [i_1] [i_6] [i_7] [i_7] = (((arr_5 [i_1] [i_1]) << (((((arr_4 [16]) ? ((max(3857199548, (arr_16 [i_0] [i_7])))) : (((arr_4 [i_0]) ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : var_5)))) - 3857199542))));
                    var_16 = (max(var_16, (arr_7 [i_1] [i_1])));
                    var_17 = (max(var_17, ((max(213, 203)))));

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_18 = ((min((((107 << (21534 - 21514))), ((~(arr_6 [i_8])))))));
                        var_19 = (arr_16 [i_0] [i_6]);
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_20 = (arr_18 [i_9] [i_6] [i_6] [i_1] [i_1] [i_0] [i_0]);
                    arr_34 [i_6] [i_0 - 2] = 13091443152346685796;
                }
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    arr_37 [i_0] = (arr_12 [i_0] [i_10] [i_6]);
                    arr_38 [i_0 + 2] [i_6] [i_6] = (arr_6 [i_6]);
                }
            }
            var_21 = ((var_5 ? (((min((arr_16 [i_1] [i_0]), ((min((arr_23 [2] [i_1] [i_1]), var_0))))))) : (arr_18 [i_0] [10] [i_0] [i_0] [i_0] [i_1] [i_1])));
            arr_39 [i_0] [i_1] = ((((((0 < 112) || -var_11))) | (min(var_1, ((~(arr_2 [i_0])))))));
        }
        arr_40 [16] |= (((~471552105) ? (arr_23 [i_0] [i_0] [i_0]) : ((~(((arr_2 [8]) ^ var_8))))));
    }
    var_22 = (((var_2 % var_0) >= var_8));
    var_23 = ((180 % (min(((var_8 << (95 - 46))), var_6))));
    #pragma endscop
}
