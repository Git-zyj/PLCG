/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 4294967293));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 += (((~var_4) / (((arr_4 [i_0] [i_1]) - (!0)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 1] = (arr_1 [i_0] [i_1 + 1]);
                            var_21 = (((min((var_17 || var_5), (var_6 - var_2))) + (((max(((((arr_12 [i_0] [i_0]) >= 21))), (max(1, 28))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
