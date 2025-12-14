/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 ^= (12729 + -12729);
        var_16 = (arr_1 [i_0 - 2]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_14 [i_0 - 3] [1] [19] [i_2] = var_4;
                        arr_15 [i_0 - 1] [i_0 - 1] [i_2] [i_3] = min((((max(12729, -12745)))), ((~(arr_6 [i_0 - 2] [i_1] [15]))));
                    }
                }
            }
            var_17 = ((((min((~var_5), ((~(arr_10 [i_1] [9] [i_1] [i_1])))))) ? (min((arr_3 [i_0 - 3] [i_0 - 3]), var_0)) : ((((arr_13 [20] [i_1] [18]) ? var_2 : ((12743 ? 53 : (arr_8 [i_0] [0] [i_1]))))))));
        }
    }

    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        arr_18 [i_4] = ((+(min((arr_1 [i_4]), ((172 / (arr_9 [i_4] [2])))))));
        arr_19 [i_4] = (arr_8 [i_4 - 2] [i_4] [i_4 - 2]);
        var_18 = (arr_2 [i_4 - 2]);
    }
    var_19 = -var_7;
    #pragma endscop
}
