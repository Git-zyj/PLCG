/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_1 [i_1] [i_0 - 3]) && (arr_1 [i_1] [i_1]))) ? (arr_1 [i_0] [i_1]) : (-356584573 || 591520812570371866)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [13] = (arr_7 [i_0] [i_0 + 2] [i_0 - 2]);
                    arr_9 [i_2] = (((arr_0 [7]) > 7326314415401659406));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 = (max(var_16, (arr_11 [i_3] [i_3] [i_3] [12])));
                    var_17 = ((~(((114 ? 356584572 : (arr_1 [1] [i_1]))))));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_18 ^= ((0 ? (((((!(arr_13 [i_4] [15] [i_1] [1] [i_0] [i_0]))) ? 57232 : 9223372036854775807))) : 57232));
                        arr_17 [i_4] [i_3] [i_0] [i_0] = arr_15 [1] [14] [14] [i_4] [i_4];
                        var_19 = ((~((~(arr_6 [i_0 + 2] [i_1] [i_0 - 3] [14])))));
                        arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_4] = (!-15567117356609010322);
                        arr_19 [i_4] [4] [i_3] [i_4] = (!356584575);
                    }
                }
                var_20 = ((-(arr_16 [i_0 - 3])));
                var_21 = (max(var_21, 639825133));
            }
        }
    }
    var_22 = (((((var_13 ? 222 : var_6))) ? (((-(182 | 356584575)))) : ((var_14 ? (~1) : (4025374105331649086 / 16777215)))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_6] = (~0);
                var_23 = (-(arr_20 [17]));
            }
        }
    }
    #pragma endscop
}
