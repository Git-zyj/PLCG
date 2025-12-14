/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = ((+(max((!var_2), (~22163)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 = (arr_3 [i_1]);
            var_20 ^= (var_0 & (arr_4 [i_1] [i_0 - 2]));
            var_21 ^= (!15948781469256559179);
            arr_6 [i_0] = (arr_2 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_22 |= ((~(arr_0 [i_0 - 1])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_3] [i_4] [i_0] = (((arr_15 [i_2] [i_2 + 1] [i_2 + 3] [i_3] [i_5 - 1] [i_5] [3]) ? (-14357 / -14357) : (((arr_0 [i_0 - 2]) ? 111 : 10064))));
                            arr_19 [i_0 + 2] [i_2 - 1] [i_3] [i_3] [5] [i_0] = ((~(arr_14 [i_0 + 1] [i_0 + 1] [i_3] [i_4 - 2])));
                        }
                    }
                }
            }
            var_23 = (min(var_23, (((5476929697651356644 ? (!1) : (var_9 && var_2))))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_24 *= ((arr_17 [i_0] [i_6] [i_7] [i_9] [i_9 - 1]) && 5815);
                            var_25 = (min((((arr_23 [i_0 + 1] [i_0]) + var_11)), (((!(arr_24 [i_6] [i_7] [i_7]))))));
                        }
                    }
                }
            }
            var_26 = (((arr_16 [i_0 - 1] [i_0] [i_6] [i_0]) & ((min((arr_28 [i_0 - 2] [i_6] [i_0] [i_0 - 2] [i_6] [i_6]), var_8)))));
        }
        arr_30 [i_0] [i_0] = (arr_27 [i_0 + 1] [i_0] [i_0]);
        var_27 = (max(var_27, (((!((min((((5818 ? 2 : 1))), (max(2338302060, var_10))))))))));

        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            var_28 = ((+(((arr_20 [i_0 + 1]) ? (arr_20 [i_0 - 2]) : (arr_20 [i_0 - 2])))));
            arr_34 [i_0] = (((arr_31 [i_10 + 2] [i_10 + 4]) >> (((arr_31 [i_10 - 1] [i_10 + 3]) - 188))));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_29 = (((arr_4 [i_0] [4]) & var_16));
                var_30 = (((((var_7 ? ((4547179225433424245 ? -4821169008895699456 : var_16)) : ((((var_7 > (arr_21 [i_0])))))))) ? ((((arr_12 [i_0 + 2] [i_0] [i_0 - 1]) & (arr_7 [i_11])))) : (max(((min((arr_17 [3] [i_0 - 1] [i_12] [i_0] [i_12]), var_4))), (((arr_17 [i_0 + 1] [i_11] [13] [i_0] [i_12]) & var_9))))));
            }
            arr_40 [i_0] = (arr_29 [i_11] [i_11] [7] [i_11] [7]);
        }
    }
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        var_31 -= (~(((arr_42 [i_13] [i_13]) + (arr_41 [i_13] [i_13]))));
        arr_43 [i_13 + 2] [i_13] = (arr_41 [i_13] [i_13]);
        var_32 = (~220);
    }
    #pragma endscop
}
