/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_16 = (((((!(arr_4 [10])))) ^ (arr_2 [i_1 + 1])));
                        var_17 = ((arr_0 [i_0]) ? (arr_0 [i_0]) : 9);
                    }
                    var_18 |= var_9;
                    var_19 = (min(var_19, (arr_0 [i_1])));
                }
            }
        }

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = var_8;
            var_20 = ((var_6 << (((18446744073709551615 % var_1) - 713571708))));
        }
    }
    var_21 = (var_6 ? ((70 ? var_14 : (var_8 | -2672921963472882680))) : ((((var_6 ^ var_9) % ((min(var_0, var_5)))))));
    var_22 = var_12;
    #pragma endscop
}
