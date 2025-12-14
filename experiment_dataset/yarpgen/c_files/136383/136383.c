/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 2854848743));

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 |= (max((((arr_0 [i_0 - 3]) ^ (arr_0 [i_0 + 2]))), ((var_4 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1])))));
        var_20 += ((-(((arr_1 [i_0]) + (max((arr_1 [i_0]), (arr_1 [i_0])))))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_21 = var_1;
            var_22 &= (27739 ? (arr_3 [i_0] [i_1 + 2] [9]) : -10007);
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_23 = (((((((var_2 ? (arr_8 [i_0 - 1] [i_0]) : var_1))) ? var_0 : (arr_6 [i_0])))) ? var_14 : (arr_7 [i_0] [i_0]));
            var_24 = ((+(((arr_5 [i_0 - 3] [i_2 - 1] [i_2 + 1]) - var_4))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_25 = (((((arr_2 [i_0]) & var_6)) != (arr_3 [i_0] [i_0 - 1] [i_0 - 3])));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_26 = (arr_12 [11] [i_3] [i_4]);

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_27 = ((arr_6 [i_0]) ? var_9 : (!var_0));
                    var_28 = (arr_14 [i_0] [i_3] [i_4] [i_5] [i_4]);
                }
            }
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                var_29 &= ((((var_6 ? var_14 : 4165293880563069514)) * (arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 3])));
                var_30 |= ((1 ? ((((var_14 && (arr_17 [1] [i_3] [i_0]))))) : 1));
            }
            var_31 = var_6;
        }
        var_32 &= (((((arr_2 [i_0 - 2]) ? (arr_15 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_0]) : (arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 3]))) == (((-((7 ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0]))))))));
    }
    for (int i_7 = 4; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_33 = (((~(arr_5 [1] [i_7 - 3] [i_7]))));
        var_34 = ((((max((((arr_14 [3] [3] [i_7] [i_7] [3]) ^ (arr_4 [i_7]))), (arr_8 [i_7 - 2] [i_7 - 2])))) ? 22039 : (max(var_8, 255))));
        var_35 = (min(-367228960, (arr_2 [i_7])));
    }
    #pragma endscop
}
