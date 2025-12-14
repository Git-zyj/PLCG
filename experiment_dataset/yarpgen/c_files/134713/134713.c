/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_13;
    var_15 = (min(var_15, var_9));
    var_16 ^= -806083212;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_17 = (min(var_17, (arr_0 [i_0])));
        arr_4 [4] = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((-(min((arr_6 [i_1]), var_4))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_18 [i_1 + 1] [i_2] = ((!(arr_10 [i_1] [i_2] [i_1])));
                        arr_19 [i_4] [i_1] [i_1] [i_1] = (((arr_5 [i_1 - 2]) ? 32752 : (arr_15 [i_2] [i_2 + 1] [i_4 + 1] [i_4])));
                    }
                }
            }
        }
        arr_20 [i_1] = (~(arr_15 [i_1 + 1] [1] [i_1] [2]));
        arr_21 [i_1 + 1] = 562949953419264;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_24 [i_5] = var_10;
        arr_25 [i_5] [8] = min(var_5, ((((min(32759, var_9))) ? ((-806083212 ? var_3 : 2785828166)) : (((min(var_6, (arr_23 [i_5]))))))));
    }
    var_18 -= (min((((((-806083206 ? -7998925298033834376 : 59458))) ? var_10 : (var_0 ^ -32760))), ((var_4 ? var_6 : var_6))));
    #pragma endscop
}
