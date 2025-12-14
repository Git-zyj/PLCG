/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(-27059, 13140));
    var_19 = (max(var_19, (((max(var_11, (min(var_2, var_12))))))));
    var_20 -= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_22 = (min(var_22, -3280613686));
            var_23 |= (arr_3 [i_1 - 2] [i_1] [i_1 - 2]);
            var_24 = (min(var_24, (((-(arr_1 [i_0] [16]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_25 = (min(var_25, (arr_6 [i_1 + 2] [i_1 + 2] [i_2] [i_2])));
                        var_26 -= ((10202754736570727106 >> (((((arr_5 [i_0]) << (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))) - 13861118614867673063))));
                    }
                }
            }
            var_27 = 1;
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_28 ^= 27061;
            var_29 = (min(var_29, (arr_3 [i_0] [i_0] [i_4])));
            arr_12 [i_0] = (arr_2 [i_0]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_30 = ((-(arr_14 [i_0] [i_5])));
            var_31 = (min(var_31, (arr_4 [i_5] [i_0] [i_5] [i_5])));

            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                var_32 = (max(var_32, (arr_16 [i_6 - 1])));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_33 = (min(var_33, (((-27059 + 2147483647) >> (27061 - 27053)))));
                    var_34 *= ((((arr_8 [i_0]) ? (arr_3 [i_0] [i_6 - 3] [i_7]) : (arr_3 [10] [i_6 - 1] [10]))));
                    arr_21 [i_0] [i_5] [i_5] [i_6 + 2] [i_7] [i_5] = (((arr_15 [i_0] [i_5] [i_5] [i_7]) ? (arr_10 [i_6] [i_6 - 1]) : (arr_4 [i_6 + 2] [i_5] [i_5] [i_6 - 3])));
                }
            }
            arr_22 [i_5] = (((arr_9 [i_0] [i_0]) <= var_10));
        }
        var_35 = (arr_2 [i_0]);
    }
    var_36 = ((((min(var_14, 55)) ? ((var_9 ? -27084 : var_15)) : ((12490 ? var_13 : var_15)))));
    #pragma endscop
}
