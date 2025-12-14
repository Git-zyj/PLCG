/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((1810516189 ? var_4 : (((var_17 ? var_5 : var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    arr_11 [i_0] [8] [i_2] = (min((~-2002803880), (max((arr_0 [i_0] [i_0]), (max((arr_9 [i_2]), (arr_3 [i_2])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (max(var_19, (arr_1 [i_2 - 1])));
                        arr_14 [i_0] [i_0] [5] [8] [8] [0] = 2147483647;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [4] [i_2] = ((~(~-32752)));
                            var_20 -= (!64424509440);
                            var_21 = var_0;
                        }
                        var_22 &= (((arr_16 [i_0] [i_1] [i_2 + 3] [i_3]) ? (arr_7 [i_3] [1] [i_2 - 3] [i_3]) : (arr_7 [i_0] [1] [i_2 - 3] [3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
