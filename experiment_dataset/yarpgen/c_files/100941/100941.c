/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((((0 ? (-43 || 8184) : (min(var_11, 3935864754))))) ? (((!(((43 ? 56 : 147)))))) : 3935864754));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_17 = (min(var_17, ((((!2257341145) % (var_3 <= 3935864766))))));
            arr_5 [21] = (-9223372036854775807 - 1);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_18 = (min(47560, 0));

            /* vectorizable */
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                arr_11 [i_0] [i_2] [i_2] [i_0] = ((-(arr_3 [i_0] [i_3 + 3] [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!359102530);
                            var_19 = (min(var_19, (((!(((var_15 ? 155 : 8755288231084967483))))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_23 [i_0] [i_0] [i_0] [i_6] [i_6] = 14;
                    var_20 = var_13;
                    var_21 *= -var_11;
                }
                var_22 = (min(var_22, 15));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_27 [i_0] [i_2] [i_7] = 359102542;
                arr_28 [i_0] [i_0] [i_0] [i_0] = (((min(16, var_5)) | (((184 ? 5563198166999392857 : 18446744073709551615)))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((!((max((min(3935864754, 49)), (arr_15 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 3]))))))));
                            var_24 = (~8016370554811870848);
                            var_25 = var_4;
                            var_26 -= (((127 ? var_14 : (arr_33 [1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_39 [i_10] [i_2] = -var_9;
                    var_27 = var_13;
                }
                var_28 = (((((!(arr_34 [1])))) > 1227345452));
                var_29 = (min(var_29, ((((((248 ? 1941715014 : 20402))) ? 8755288231084967486 : 47560)))));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_42 [i_0] [i_0] [i_0] [15] = (((max(1598, -8755288231084967483))));

                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    var_30 = (min((((((3935864765 ? 2251799813685184 : 144115188075855872))) ? 5076783000282319867 : 26962)), (!-1)));
                    var_31 = (max(18302628885633695744, -21816));
                }
                arr_47 [12] [16] [i_12] = ((var_4 ^ (max(var_2, -43))));
            }
            var_32 = ((max(-58, ((55342 ? var_8 : 1288220561)))));
            var_33 = (max(var_33, (arr_43 [i_0] [i_0] [i_0] [i_0] [20])));
            arr_48 [i_0] = ((((((46067 < (arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_2]))))) - (((!((min(1539403479, 144115188075855878))))))));
        }
    }
    var_34 = var_7;
    #pragma endscop
}
