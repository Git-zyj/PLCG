/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_7 > var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [4] [i_3] = (((-53 && -2) > (((245 / var_3) % ((~(arr_2 [i_0])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] = (arr_8 [i_0] [i_1] [i_2] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = var_6;
                        arr_15 [i_0] [7] [i_2] [i_0] = ((var_7 ? ((1 ? var_8 : 52)) : (72 && var_10)));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_4] = ((((max(161, -57))) ? 65440 : -4445));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] = 22038;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_6] = ((~((min((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2]), var_11)))));
                            var_13 = ((78 ? (-53 != 4359421489844685220) : (31158 > -18)));
                        }
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_7] = (min((max((-90 & 63), ((-(arr_5 [i_0] [i_0] [i_0] [i_0]))))), ((((((arr_12 [i_0] [i_0] [i_2] [i_7]) ? var_8 : (arr_0 [8])))) ? (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [6] [i_0 - 1]) : (((109 <= (arr_16 [i_0 + 2] [i_2] [9] [i_7] [i_7] [i_1]))))))));
                        var_14 = (75 >= 89);
                        var_15 = ((((((arr_24 [i_0] [i_0] [i_0 + 1] [6] [i_0 - 1]) ? var_4 : (arr_24 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2])))) ? (((((-86 ? var_10 : -2))) ? var_11 : (~0))) : ((((((arr_21 [2] [2] [i_7] [i_7] [2]) ? -101 : (arr_3 [i_0 - 1] [11])))) ? (((arr_6 [i_0] [i_0] [i_2] [0]) ? var_6 : 2680)) : (arr_24 [i_0] [i_1] [12] [i_7] [i_0])))));
                    }
                    var_16 = (max((((arr_4 [i_0 + 2] [i_0 + 1] [i_0 - 1]) ? (arr_17 [i_0 - 1] [10] [i_1] [12] [i_1] [10]) : (((!(arr_24 [i_0] [i_0 - 1] [i_1] [9] [5])))))), (~-97)));
                }
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
