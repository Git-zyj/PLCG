/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 += (min(var_10, 0));
                    arr_9 [i_0] [i_0] [i_2] [4] = (var_4 ^ var_2);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_12 += ((var_1 ? (arr_7 [i_0] [i_3] [i_2]) : (min(13955665501455147451, ((min(98, -1707075230)))))));
                        var_13 -= (arr_0 [1]);
                    }
                }
            }
        }
    }
    var_14 = (((var_9 + 9223372036854775807) >> ((((-((var_2 ? var_2 : var_10)))) - 71))));
    #pragma endscop
}
