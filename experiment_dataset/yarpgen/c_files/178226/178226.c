/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = ((var_12 > (arr_1 [i_1] [i_0])));
            arr_8 [i_1] [i_0] [i_0] = (((arr_0 [i_1 - 1] [i_1 - 1]) ? (arr_0 [i_1 - 1] [i_1 - 3]) : 60199));
            var_16 = ((-(arr_0 [i_1 - 1] [i_0])));
            arr_9 [i_0] [i_1] = var_5;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_13 [i_0] [i_0] [i_2] = (arr_2 [i_2]);
            var_17 = 30663;
            arr_14 [i_2] = max((arr_5 [i_0]), ((((var_4 ? var_9 : (arr_2 [i_0]))) | 4035090778)));
        }
        var_18 = (arr_12 [i_0] [i_0]);
        var_19 = (((((259876517 ? 49675 : ((-6876 ? 60822 : 13930480189195607699))))) ? ((4960389636585943586 ? 65535 : ((627764909 ? 51972 : 3965792574677883646)))) : (arr_0 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                arr_20 [i_4] = ((!(((((((arr_11 [i_4 - 1] [i_4]) * (arr_12 [i_3] [i_4 + 2])))) ? (arr_16 [i_4 + 1] [i_4 + 1]) : (arr_6 [i_4 - 1]))))));
                var_20 = ((((max((arr_1 [i_4 - 1] [i_4]), 11454050040570659594))) ? (((arr_4 [i_4 + 1] [5]) | (arr_19 [i_4 + 2] [i_4]))) : ((max(1, 4294967285)))));
            }
        }
    }
    var_21 = (min(var_7, var_9));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_22 = max((arr_29 [i_6] [2] [i_7]), (((!(arr_29 [i_6] [i_7 + 1] [18])))));
                    arr_30 [i_6] [i_6] = ((((min((max(32157, (arr_29 [i_6] [i_6] [i_6]))), 2431791055))) ? (min((arr_29 [i_6] [i_7] [i_7 + 1]), (~3965792574677883663))) : ((((!(arr_24 [i_5] [i_5]))) ? ((((!(arr_23 [i_5]))))) : -3965792574677883646))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = (arr_29 [i_6] [i_9] [i_7 + 4]);
                                var_24 -= (min((((arr_29 [i_8] [i_7 + 4] [i_9 + 2]) ? (arr_29 [i_8] [i_7 - 1] [i_9 - 1]) : (arr_21 [i_7 + 1]))), ((max((arr_34 [i_9 - 1] [i_9] [i_7] [i_6] [17]), (((!(arr_33 [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                            }
                        }
                    }
                    var_25 = (min(var_25, ((((arr_32 [i_7 + 1] [i_6]) ? (((((arr_21 [i_5]) << (((arr_32 [14] [i_6]) - 4249819544)))) ^ (arr_26 [14] [14] [15]))) : (arr_29 [10] [10] [10]))))));
                }
            }
        }
    }
    var_26 = 8621002883196048977;
    #pragma endscop
}
