/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((min(-var_10, var_12))) ? var_3 : var_6));
    var_19 = (-3622683600378959523 == 1);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        var_20 = (((((var_13 >> (var_12 - 2317576441)))) ? (((~((var_2 >> (55 - 51)))))) : var_5));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 1;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_21 = (arr_9 [i_1] [i_0 - 1] [i_0 - 1]);
                var_22 = 1;
                var_23 += (var_5 == (arr_2 [i_2]));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] = ((-((~(((arr_10 [i_0] [i_1] [i_0]) ? 1 : var_7))))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                    var_24 &= (max(((max((max((arr_4 [i_0] [i_0 + 2] [i_0 + 1]), (arr_14 [i_4]))), ((var_14 + (arr_13 [i_1] [i_1] [i_1])))))), ((var_16 ? (max(1462286505, (arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))) : (max((arr_9 [i_1] [i_1] [i_4]), (arr_2 [0])))))));
                    var_25 = (((arr_0 [i_0]) << ((((arr_13 [i_0 + 2] [i_0 + 3] [i_0 + 3]) < (arr_13 [i_0 - 2] [i_0 + 3] [i_0 - 2]))))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_19 [i_5] [i_5] [i_5] [i_0] |= ((var_16 == (arr_14 [i_0 + 3])));
                    var_26 = (arr_9 [i_5 - 2] [i_5 + 1] [i_0 + 1]);
                    var_27 = (((arr_0 [i_5]) ? var_15 : (((arr_0 [i_0]) * (arr_2 [i_0])))));
                }
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_28 = (((arr_13 [i_0] [i_0] [i_1]) < var_4));
                var_29 |= (arr_9 [i_0] [i_1] [i_1]);
                arr_24 [i_0] [i_0] = ((((var_8 + (arr_21 [i_6] [i_1] [i_0] [i_0]))) + (((max((arr_18 [i_1] [i_1] [i_6] [i_0 + 3]), (arr_1 [i_0] [i_0])))))));
                var_30 = ((arr_23 [i_0] [i_6] [i_0]) << (((arr_7 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 1]) + 82)));
            }
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                var_31 = (((((arr_8 [i_0] [i_1] [i_7] [i_7]) >> (((arr_20 [i_7 + 3] [i_1] [i_0 + 2] [i_0]) + 2952421718108130358)))) == ((((arr_13 [i_0] [i_1] [i_7 + 2]) + (arr_13 [i_0] [i_1] [i_7 - 1]))))));
                var_32 -= (((var_14 << (var_14 - 71))));
            }
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_33 |= var_3;
            arr_32 [i_0] [i_0] [i_0] = var_17;
        }
        var_34 = var_17;
    }
    #pragma endscop
}
