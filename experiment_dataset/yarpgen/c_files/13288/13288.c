/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, ((max(((~(arr_1 [i_0 + 1] [i_0 - 1]))), (arr_1 [i_0 - 2] [i_0 + 1]))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_17 += (((var_1 + 2147483647) << (((((arr_4 [2] [i_0 + 1]) + 14719)) - 2))));
            var_18 = (arr_5 [i_1] [i_1]);
            var_19 = arr_1 [i_1] [i_1];

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 = (max(var_20, (arr_1 [i_1 + 1] [i_1 + 1])));
                arr_8 [i_0 + 1] [i_1] = ((var_12 ? var_6 : (18446744073709551615 ^ var_13)));
            }
            var_21 = 22841;
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_22 = (arr_6 [8] [8] [8] [i_0]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_0] [i_0] [i_0] [i_0] = ((1065843702 && (((((arr_16 [i_0 - 2] [i_3] [i_4] [i_5]) ? (arr_10 [i_0] [i_3]) : 12820325479941228351))))));
                        var_23 = (min((max(var_9, (((!(arr_0 [i_0] [0])))))), (arr_5 [6] [6])));
                        var_24 = (max(var_24, var_1));
                    }
                }
            }
            arr_18 [i_0] [i_3] = (max((arr_13 [i_3] [i_0]), (((17621955933725990620 ? (arr_10 [i_0] [i_3]) : ((max(0, -9))))))));
        }
        var_25 -= (max((arr_4 [8] [8]), (arr_14 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_26 = (arr_20 [3]);
        arr_21 [i_6] [i_6] = (((arr_20 [i_6]) ? (arr_20 [i_6]) : (arr_20 [i_6])));
    }
    var_27 ^= var_3;
    #pragma endscop
}
