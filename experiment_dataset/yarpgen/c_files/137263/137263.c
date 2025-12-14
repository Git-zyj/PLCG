/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((~(arr_2 [i_0 - 1] [i_1 - 2] [i_2])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [15] [i_2] [i_1 - 2] [i_0] = (((~var_7) < ((((arr_5 [i_0 - 1] [i_1 + 1] [i_2] [i_1 + 1]) - var_6)))));
                        var_12 = (min(var_12, (((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (var_1 + 50))) != var_10))));
                    }
                    var_13 = (min(var_13, (((+((((var_7 < var_1) != (((arr_8 [i_0 - 1] [i_0 - 1] [1] [1]) ^ var_10))))))))));
                }
            }
        }
    }
    var_14 += var_5;
    var_15 = (var_2 ^ var_1);
    var_16 = min(var_7, ((((((~var_8) + 2147483647)) << (((((var_9 | var_6) + 954996995955275538)) - 16))))));
    #pragma endscop
}
