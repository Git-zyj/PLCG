/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((max((arr_1 [i_0]), (~var_3)))) ? ((max((arr_1 [i_0]), -100))) : ((((max((arr_2 [6]), var_3)) > var_9))));
        var_12 = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = max((max((arr_5 [i_1]), (!18446744073709551595))), (arr_5 [i_1]));
        var_13 = (arr_5 [i_1]);

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_14 [i_3] [i_1] = ((0 ? (((93 ? 87 : 121))) : var_10));
                    var_14 = (min(var_14, 561169260280823951));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_15 = -561169260280823951;
                    arr_19 [i_1] [i_2] [i_3] [19] [i_5] = (arr_13 [i_2 + 2]);
                    arr_20 [i_5] [i_1] [i_2] [i_1] = (max((arr_10 [i_5] [i_5] [1] [i_5]), (max((arr_5 [i_2 - 2]), (arr_10 [i_1] [i_2] [i_2] [i_5])))));
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_16 = arr_15 [i_1] [i_2];
                    arr_23 [i_1] [4] [i_3] [i_6] = (arr_6 [i_2] [i_2 - 2]);
                    var_17 = (max(var_17, (arr_16 [i_1] [i_1] [i_2] [i_3] [i_6])));
                }
            }
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                arr_26 [i_7] [i_7] [16] [i_1] &= (5 + 93);
                var_18 = (214 / (max(-561169260280823945, (arr_16 [i_1] [i_2] [i_2 + 1] [i_2] [i_7]))));
                arr_27 [i_1] [i_1] [i_1] = 11;
                var_19 = -23552;
                var_20 = (((((var_5 | (arr_16 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 3])))) ? ((var_10 ? -114 : (arr_16 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 3] [i_7]))) : (arr_16 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 3] [i_7 - 3])));
            }
            var_21 &= 778017541;
            var_22 |= (arr_24 [i_1] [i_1] [i_2 + 3]);
            arr_28 [16] [i_1] [i_1] = (arr_24 [9] [i_2] [i_1]);
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_23 = (arr_9 [i_1] [i_8] [i_8]);
            var_24 = 499909635;
        }
    }
    var_25 = var_3;
    #pragma endscop
}
