/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-106 ? ((max(-117, 1))) : 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 |= (((arr_1 [i_0]) * var_10));
        var_13 = 110;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((arr_3 [i_1] [i_1]) ? var_9 : (arr_4 [i_1]))));
        var_14 = (min(var_14, ((((arr_4 [18]) ? var_6 : var_1)))));
        var_15 = ((((((arr_3 [i_1] [i_1]) ? 1 : 54))) ? (arr_4 [i_1]) : 863732543));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_16 -= (((((arr_8 [3] [i_4]) ? var_3 : 1216038045))) ? (arr_8 [i_3 + 1] [i_3 - 1]) : var_5);
                        var_17 = ((((((arr_7 [i_2]) ? 1346056877 : var_2))) ? ((-116 ? 0 : -1989017078)) : ((((arr_13 [i_2] [i_4]) != (arr_11 [i_3] [i_3] [1]))))));
                        var_18 ^= var_6;
                    }
                }
            }
        }
        var_19 |= (((arr_15 [i_2]) ? (arr_11 [5] [i_2] [i_2]) : 114));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        var_20 = arr_11 [i_6] [i_6] [i_6];
        var_21 = (((~127) ? 81 : (arr_4 [i_6])));
        var_22 = (((((32767 ? 18446744073709551615 : (arr_19 [i_6])))) || (((0 ? 1346056877 : 1989017069)))));
    }
    var_23 -= var_0;
    var_24 = (var_2 * var_3);
    #pragma endscop
}
