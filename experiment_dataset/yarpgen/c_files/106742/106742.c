/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 30;
    var_13 = ((var_3 << ((var_3 >> (var_3 - 58539)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1 - 2] = ((var_0 ? 1 : 225));
                arr_5 [i_1] = var_6;
                var_14 = (arr_3 [i_0] [i_1] [i_1]);

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_15 -= 1;
                    var_16 = (max(var_16, (((!(~15755))))));
                    var_17 -= 189;
                    arr_9 [i_1] [i_1] [i_2] = var_7;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_18 = ((var_8 ? 193 : var_5));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_19 = (var_7 ^ var_3);
                        var_20 = (((((~(arr_11 [i_3] [i_1] [i_3])))) ? 35916 : (~var_9)));
                        arr_14 [i_1] = ((var_9 && ((((arr_3 [i_0] [i_1] [i_3]) ? var_7 : 171)))));
                        arr_15 [i_0] [i_1] = ((80 & (var_7 | -1787213652)));
                    }
                    arr_16 [i_1] = (arr_12 [i_0] [i_1 + 3] [i_1 + 3] [i_3]);
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_21 = var_11;
                    var_22 = ((((min((arr_12 [i_0] [i_1 + 3] [i_1] [i_1 - 1]), var_0))) ? var_0 : ((((!(arr_12 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 2])))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_23 [i_0] [i_1] [i_6] = 237524739;
                    arr_24 [i_1] = var_5;
                    var_23 = -var_2;
                    var_24 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
