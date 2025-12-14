/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (((max(((max(209, var_5))), 0)) <= ((46 ? (arr_1 [i_1] [i_1]) : (23 || 46)))));
                    var_19 = (((((((23 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))) ? ((232 ? var_3 : var_0)) : 0)) > (((max(12851716427374573693, var_14)) * (-5583663689016460655 == 46)))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_20 = ((-((~(arr_1 [i_0] [i_1])))));
                        var_21 = (min(var_21, var_5));
                        var_22 = arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2];
                        var_23 = ((var_12 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_0 [i_1]) ? -1 : var_14))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_4] = var_2;
                        var_24 = (arr_3 [i_0] [i_2] [i_4]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 18446744073709551615;
                    }
                }
            }
        }
    }
    var_25 = 0;
    #pragma endscop
}
