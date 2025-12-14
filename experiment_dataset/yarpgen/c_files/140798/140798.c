/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((+((((arr_1 [i_0 + 2]) != (arr_3 [i_1] [i_0] [i_1]))))));
                var_11 = (max(var_11, (arr_1 [i_0 + 1])));
            }
        }
    }
    var_12 = ((((((((-1993008359397327206 ? var_5 : var_7))) ? (!-1) : (-1 / var_0)))) ? var_5 : (max(((248 ? 10 : (-9223372036854775807 - 1))), var_6))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_13 = (arr_3 [i_2] [i_2] [i_2]);
        var_14 = (arr_1 [i_2]);
        arr_6 [i_2] [i_2] = (((arr_4 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])));
        var_15 ^= (((arr_3 [1] [i_2] [1]) ? (arr_3 [10] [i_2] [i_2]) : (arr_3 [8] [i_2] [1])));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_16 += 576460752303423488;
        var_17 = ((((var_9 > (max(255, (arr_1 [9]))))) ? var_9 : ((((max(65535, -72057594037927936))) ? 251 : var_3))));
        arr_9 [i_3] = ((((((((arr_3 [i_3] [i_3 - 1] [i_3]) ? (arr_8 [i_3]) : (arr_2 [i_3])))) ? (arr_0 [i_3] [8]) : (arr_7 [i_3] [i_3]))) % (arr_8 [i_3])));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_18 *= var_4;

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_15 [i_4] [i_4 - 3] = 32768;
            var_19 = (max(((((6 / 17592186044415) == 576460752303423488))), (((arr_10 [i_4 - 2]) ? (arr_11 [i_4] [i_5]) : (var_8 & 4423262117985636433)))));
        }
        var_20 = (((!(arr_14 [i_4] [i_4] [i_4 - 3]))) ? (((-1993008359397327206 < (arr_14 [i_4] [i_4] [i_4 + 3])))) : (arr_11 [i_4 - 1] [i_4 + 2]));
    }
    var_21 = (min(var_21, (var_8 + 535822336)));
    #pragma endscop
}
