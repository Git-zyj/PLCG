/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [i_0] [i_0]);
                    arr_9 [i_1] [11] [i_1] [i_1] = var_9;
                    arr_10 [i_1] [i_0] [i_1] [11] = (137 + 8744);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_19 = (~14336);

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_3] [i_3] = var_15;
            arr_16 [i_3] [i_4] [i_4] = min((((arr_12 [i_3]) ? var_10 : -31077)), (arr_14 [i_4]));
        }
        arr_17 [i_3] &= ((32767 ? 13289 : (arr_13 [0])));
        var_20 += ((((((((var_15 + (arr_14 [i_3])))) - (max(var_1, 6031511394733984260))))) ? (arr_11 [i_3]) : ((((((-(arr_11 [i_3])))) ? 3761831031 : var_13)))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_21 = 74;
        var_22 = (((arr_18 [i_5 + 2]) != (((var_1 > (arr_18 [i_5 + 4]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_23 = (min((arr_4 [i_7] [5] [i_8 - 1]), (~var_0)));
                    arr_31 [9] [i_7] [i_8] [i_6] = (((-(arr_8 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))));
                }
            }
        }
        arr_32 [i_6] |= (((((arr_8 [i_6] [i_6] [i_6] [i_6]) * var_1))));
    }
    var_24 ^= (min((var_11 * var_14), ((((-1558771069 ? var_8 : var_1)) / 17478185143072292841))));
    #pragma endscop
}
