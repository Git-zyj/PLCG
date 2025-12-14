/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_5 ? var_2 : var_6);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [5] [i_0] = ((!(((-(!8216403688840968325))))));
        var_13 = ((-(-var_8 && -var_7)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_14 -= var_11;
                                var_15 = ((var_11 - (!268435455)));
                            }
                        }
                    }
                    var_16 |= (min(-127, (var_5 && var_9)));
                    arr_17 [i_3] [i_2] [18] = ((-(max(67106816, 0))));
                    arr_18 [i_1] [1] [i_1] [i_3] = (max(((var_10 ? var_9 : var_8)), (arr_9 [i_1] [i_1] [i_3])));
                    arr_19 [i_3] [i_2] [i_2] [i_2] = min(var_6, (((((max(67106812, 100))) == -var_8))));
                }
            }
        }
        arr_20 [i_1] = var_8;
        arr_21 [i_1] = ((((((arr_12 [i_1] [0] [i_1]) ? var_9 : 13))) ? (max((arr_7 [i_1]), var_9)) : var_1));
        var_17 = 67106812;
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            {
                arr_28 [i_6] = (((!-var_9) * (!var_4)));

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_18 |= (arr_15 [1] [21] [i_8] [i_6] [i_6] [i_7]);
                    arr_32 [i_6] [i_6] = var_8;
                    arr_33 [i_7] [i_6] = var_1;
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_38 [i_6] = (((((var_1 ? (arr_8 [i_6] [5] [i_9]) : var_2))) ? var_0 : (!var_6)));
                    arr_39 [i_6] = (((arr_30 [i_6] [i_6] [i_6 - 2] [i_6]) / var_4));
                }
            }
        }
    }
    var_19 = ((-67106816 ? -67106816 : 119));
    var_20 = -67106803;
    #pragma endscop
}
