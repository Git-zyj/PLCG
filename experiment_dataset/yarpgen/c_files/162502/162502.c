/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_10 = (min(var_10, (~127)));
        var_11 -= ((~(arr_2 [i_0 - 2] [i_0 - 2])));
        var_12 ^= ((29430 && (arr_1 [i_0 - 2] [i_0 - 2])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (min(var_13, 124));
            var_14 -= arr_3 [i_0] [i_0 - 1] [i_0 + 2];
        }
        var_15 -= var_5;
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_16 = (((max((((var_3 <= (arr_7 [i_2])))), (max(-127, 1))))) || ((max(((((arr_5 [i_2]) || var_9))), var_9))));
        var_17 -= ((-(min(var_4, (arr_6 [i_2])))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 ^= (min((max(var_8, 29430)), (arr_8 [i_2])));
            arr_10 [i_3] [i_2] = (max(((min((max(var_3, (-127 - 1))), ((-(arr_8 [i_2])))))), (min(1, ((min((arr_7 [18]), 22)))))));
        }
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        arr_14 [i_4 - 4] = (~(max(var_6, (-127 - 1))));
        var_19 &= (((((arr_9 [i_4 - 1] [i_4 - 2] [i_4 + 1]) ? (arr_9 [i_4 - 2] [i_4 - 4] [i_4 - 1]) : 36105))) ? (var_0 && 9) : (arr_9 [i_4 - 4] [i_4 + 2] [i_4 - 3]));
        var_20 = (min(65531, 33922));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5] &= (((arr_3 [i_5] [i_5] [i_5]) ? 29441 : var_3));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_21 = (arr_8 [i_5]);
                    var_22 = (max(var_22, (arr_15 [i_7])));
                    var_23 = (((arr_8 [15]) ? (arr_8 [i_6]) : 1985993921));
                    var_24 = var_5;
                    var_25 = (min(var_25, (arr_6 [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
