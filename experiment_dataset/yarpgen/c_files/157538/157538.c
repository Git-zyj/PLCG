/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_2 - 2] [2] [i_2] = ((~(arr_4 [i_2 - 1] [i_0])));
                        var_11 |= ((-18 + (((arr_0 [i_0 - 1] [11]) / var_7))));
                    }
                }
            }
        }
        arr_10 [4] = (((arr_3 [i_0]) | var_5));
    }
    var_12 = (min(var_12, (((var_8 % ((((((var_4 + 2147483647) >> var_10)) << (var_7 - 36)))))))));
    #pragma endscop
}
