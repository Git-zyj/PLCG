/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 ^= 9223372036854775807;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_12 = ((!(((arr_5 [i_0] [i_2 - 1] [i_3]) > var_9))));
                        var_13 = 512353513;
                        var_14 = 109;
                        var_15 *= (max(8225223533115773230, ((((((arr_3 [i_0] [9] [9]) ? 6133981091465078267 : var_3))) ? (min(6133981091465078267, 127)) : -7302396698909644992))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((max((arr_7 [i_1 + 3] [i_2] [i_2 - 1] [i_2 - 1]), var_1)));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_16 = (min(var_16, (var_1 & 7302396698909644992)));
        var_17 = ((~(arr_12 [i_4 + 3] [i_4 + 1])));
        var_18 = ((arr_12 [i_4 - 2] [i_4 + 3]) ? var_3 : (var_4 < var_7));
    }
    var_19 = ((~((var_2 ? (min(-7302396698909644992, 7302396698909644991)) : 17147))));
    #pragma endscop
}
