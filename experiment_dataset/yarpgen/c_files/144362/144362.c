/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_16 = (((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 3]))) & (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 3])))));
            var_17 *= 250;
        }
        var_18 = ((var_13 % (max((max(2741434325, (arr_0 [i_0]))), (~46483)))));
        var_19 = (max(-var_8, (((((arr_0 [i_0]) ? 123 : 2741434326))))));
        var_20 |= (max(((max((arr_3 [4] [8]), (arr_3 [4] [i_0])))), (max(200, 15986174329748010905))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_21 = (max((((~((max(var_5, 7)))))), (max(8427241113278382004, 0))));

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_22 &= min((min(-var_0, (arr_6 [i_0] [i_4] [i_3] [i_4]))), (((((!(arr_10 [i_4] [i_4]))) ? (((var_10 && (arr_11 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0])))) : var_8))));
                        arr_12 [i_0] = (max(-6375058967275062204, -var_12));
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = var_1;
                    }
                    var_23 += max(9223372036854775807, ((max(42, (arr_3 [2] [i_3 + 2])))));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_24 = var_12;
            var_25 |= (((((!(((var_7 ? 1629931987 : -28)))))) - (~var_2)));
            var_26 = ((((min(var_6, (arr_17 [i_6] [i_6] [i_5])))) ? ((((((var_15 ? var_2 : var_9))) ? (((arr_17 [i_5] [i_5] [i_6]) ? 208 : var_4)) : ((-(arr_16 [i_5])))))) : var_15));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_27 -= (arr_21 [i_5 - 2]);

            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                arr_24 [i_5] [i_7] [i_7] = 1;
                var_28 = (max(var_28, ((((-(arr_21 [3])))))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_29 &= (((((var_3 ? var_8 : (arr_15 [i_5])))) ? (arr_23 [i_5] [i_5]) : (arr_23 [i_5] [i_5])));
                arr_28 [i_5] [i_7] [i_7] = ((!(arr_17 [i_5] [i_5] [i_5])));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 *= (((-28 + 2147483647) << (((arr_29 [i_5 + 1] [i_10] [i_10] [i_7]) - 124))));
                var_31 = (arr_31 [i_5 + 2]);
            }
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_32 = (min(var_32, ((((arr_25 [i_5] [i_5 - 1] [i_13]) > 1043868781)))));
                            var_33 ^= ((~(arr_30 [i_5 - 1])));
                            var_34 = var_9;
                        }
                    }
                }
            }
            arr_41 [i_5] [i_7] [i_7] = ((-(arr_17 [i_5 - 2] [i_5 - 2] [i_5 + 1])));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_35 = (arr_27 [i_5] [6]);
            var_36 = (min(var_36, (arr_19 [6] [i_14])));
        }

        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            arr_47 [10] [7] [i_15] = (((((arr_33 [i_5] [i_5]) << (((arr_46 [i_5] [i_5]) - 56270))))));
            var_37 = ((((min(3, (arr_44 [i_15] [i_5] [i_5])))) ? ((-(16338 > var_2))) : var_13));
            var_38 = (((((max((arr_43 [i_5 + 2] [i_5]), (arr_22 [i_5 + 2] [i_15] [i_5 + 2]))))) % (max((arr_42 [i_5 + 2] [i_15]), (arr_22 [i_5 + 1] [i_15] [i_5 - 1])))));
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
        {
            arr_50 [i_16] [i_16] = (min((arr_38 [i_5] [i_16] [i_16] [i_16] [i_16] [i_5]), ((min((arr_23 [i_5] [i_5]), var_10)))));
            var_39 = (min(var_39, (((+((((9223372036854775781 ? (arr_23 [i_5] [i_5]) : (arr_31 [i_16]))) >> (((arr_37 [i_5]) - 2049749934)))))))));
        }
    }
    var_40 = (min(((var_0 ? (!-1) : var_10)), var_8));
    #pragma endscop
}
