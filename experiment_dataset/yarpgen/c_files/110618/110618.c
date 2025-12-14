/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((min(var_0, (!var_3)))), ((1 >> (min(4294967295, var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 += (((4294967295 / 3017) ? 0 : ((((arr_5 [i_0]) / ((576458553280167936 ? 113 : (arr_5 [i_1 - 1]))))))));
                        var_18 = (max(var_18, ((((((min(var_5, (arr_5 [i_3]))))) < (((((arr_0 [i_0] [i_0]) ? var_12 : 4294967295)) + (arr_3 [5] [i_0 - 1]))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = 192;
                    }
                    var_19 = (~var_10);
                    var_20 -= (max((max(var_4, 49912)), var_15));
                }
            }
        }
    }
    #pragma endscop
}
