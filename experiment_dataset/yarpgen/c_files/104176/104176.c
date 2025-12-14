/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [16] &= (((~152) ? ((((arr_0 [10] [i_0]) != (arr_0 [i_0 - 1] [i_0 - 3])))) : ((((arr_0 [i_0 - 2] [i_0 - 2]) >= (arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_11 = ((((((arr_0 [i_0] [i_0 + 2]) ? var_5 : 104))) ? (max(var_4, (var_7 * var_4))) : (max(var_5, (((arr_0 [i_0] [i_0]) << (var_1 + 15287)))))));
        arr_3 [i_0] [i_0] = (max(((var_4 ? 1 : (231 / 53383))), ((max((((var_3 ? 153 : var_2))), (((arr_1 [15] [i_0 - 2]) / var_5)))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_12 [i_1] [i_1 + 1] [i_2] &= (((arr_5 [i_1 + 1]) ? var_4 : ((((arr_11 [i_1]) < (!var_7))))));
            var_12 = -18446744073709551615;
            arr_13 [i_2] [i_1 + 2] = 156;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_16 [i_3] = var_8;
            arr_17 [i_1] = 108;
            arr_18 [i_1] = (((arr_11 [i_1 + 3]) ? var_0 : 1023));
        }
        arr_19 [i_1] = (((((-(arr_5 [i_1 + 3])))) ? ((var_4 ? (arr_5 [i_1 + 2]) : var_1)) : var_7));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_13 = ((max((arr_21 [i_4] [i_4]), var_0)));
        var_14 |= (max((max((((arr_6 [i_4]) ? var_9 : var_8)), ((min(169, 94))))), (max(-128, var_0))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_15 = (((!96) ^ ((((var_9 ? var_6 : 99))))));
                arr_28 [i_5] [i_6] = (((arr_4 [i_6]) / (arr_10 [i_5])));
            }
        }
    }
    var_16 = (((((var_5 ? var_6 : 1)))) ? ((((var_2 <= var_3) & (var_3 ^ var_9)))) : (((((var_7 ? var_2 : 113))) ? var_6 : (((var_8 ? var_5 : 152))))));
    #pragma endscop
}
