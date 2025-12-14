/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((12400599292525935413 ? var_0 : ((2097151 ? var_3 : var_3)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_11 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_3 [i_1]);
        var_13 = (max(var_3, ((1428687768002046077 + (max(6046144781183616202, (arr_1 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_14 = (arr_6 [i_2]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] [i_2] = (!1);
            arr_12 [i_2] = 1;
            var_15 = ((!(arr_1 [i_3])));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_16 = (min((arr_9 [i_2] [i_4]), ((max((arr_4 [i_2]), (arr_4 [i_4]))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        var_17 = (min(var_17, var_6));
                        var_18 = 840733536;
                        var_19 = 0;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 4; i_8 < 6;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_33 [i_2] [i_2] [i_8] [i_9] [i_10] [i_8] = ((((min(((18446744073709551615 ? 0 : 3873731762302180839)), 0))) ? (min((arr_20 [i_8 + 2] [i_8] [i_8 + 4] [i_8]), (var_4 <= 14))) : ((55 ? 6046144781183616202 : (min(14, (arr_13 [i_7] [i_8] [i_10])))))));
                            arr_34 [i_8] [i_8] = 109455515;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 7;i_12 += 1)
                {
                    {
                        var_20 = (arr_37 [i_11]);
                        var_21 = (((arr_40 [i_12] [i_2] [i_11] [i_12] [i_11] [i_7]) << (((min((arr_26 [i_7] [i_12 - 1] [i_12] [i_12]), 6046144781183616205)) - 113757224))));
                    }
                }
            }
            arr_41 [i_2] [i_7] = (arr_40 [i_7] [i_7] [i_7] [i_2] [i_2] [i_2]);
            arr_42 [i_2] = (max(135, 32767));
        }
    }
    #pragma endscop
}
