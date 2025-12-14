/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(30, -7359455115139928975));
    var_21 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -10736;
        var_22 ^= (((arr_1 [i_0]) / (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = 106;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] = (!10713);
            var_23 = (((arr_5 [i_0] [15] [15]) ? var_6 : (arr_2 [i_0])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_14 [16] [7] [i_0] [i_3] = (arr_5 [i_2] [i_2] [11]);
                var_24 = ((var_14 | (arr_12 [i_0] [i_2] [i_2] [i_3])));
                arr_15 [i_0] [i_2] [i_2] [i_0] = ((13866 ? var_10 : 150));
                var_25 = var_0;
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_26 = -var_0;
                arr_20 [i_0] [i_2] = (~(arr_10 [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_25 [i_0] = (((arr_0 [i_0] [i_6]) ? var_17 : -var_18));
                            arr_26 [5] [i_0] [9] [16] [i_6] = ((!(arr_8 [i_0])));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    var_27 = ((var_19 ? (((arr_8 [i_0]) ? var_7 : (arr_30 [i_0] [i_2] [i_2] [i_2]))) : var_2));
                    arr_32 [i_0] [i_7] [i_0] = ((-2288974699595891341 ? 17897 : 102));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_36 [i_0] [19] [i_7] [i_0] = -var_17;
                        arr_37 [i_9] [i_0] [6] [i_0] [i_2] [i_0] [i_0] = ((47656 ? 143 : -119));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_41 [i_0] [i_0] = var_12;
                        var_28 ^= (2788808070 | 5554003458442564053);
                    }
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_44 [i_0] [i_2] [i_2] [i_0] = (arr_10 [i_0] [i_0]);
                    var_29 = ((-(arr_27 [i_0] [i_0] [i_7])));
                    arr_45 [i_0] [i_0] [i_0] = (((arr_40 [i_0] [i_7] [7] [14] [7] [7] [i_0]) - var_15));
                }
                arr_46 [i_0] [7] [i_0] = -28894;
            }

            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                arr_50 [i_0] [17] [i_2] [i_12] = var_10;
                var_30 = ((~((var_2 ? var_2 : 5445779870965907491))));
                var_31 = -1;
            }
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        arr_55 [i_13] [i_13] = 15680843700384166280;
        arr_56 [i_13] = ((((!(((var_10 ? var_18 : 1193050105))))) ? 1102237195 : ((((arr_52 [i_13] [i_13]) == 0)))));
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    arr_62 [i_13] [i_14] [i_14] = (max((min(var_12, ((var_6 ? 1 : (arr_51 [i_13] [i_13]))))), (28887 > 15680843700384166283)));
                    arr_63 [1] [i_15] = 661075679132502091;
                    arr_64 [i_13] [7] [7] [15] = ((!(1 + 17880)));
                    var_32 = (-34 < 28896);
                }
            }
        }
        var_33 = (max(153, (((arr_60 [i_13] [i_13] [i_13] [i_13]) ? (arr_52 [i_13] [i_13]) : var_19))));
        arr_65 [i_13] = ((28918 ? ((10289963896560723715 ? 28894 : ((53740 << (16245760675023509275 - 16245760675023509274))))) : 126));
    }
    var_34 -= var_4;
    #pragma endscop
}
