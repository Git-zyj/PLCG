/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 *= (min((arr_5 [i_1] [i_1] [i_1]), -16114));
                            arr_11 [14] [i_1] [i_2] [i_2] [i_2] = ((!(((-((min(16104, (arr_8 [i_2] [i_3])))))))));
                        }
                    }
                }
                var_16 = (max(var_16, (((9470374025641944955 ? ((54934 >> (-5027 + 5039))) : 1)))));
                var_17 ^= ((61684 ? 16799218683230157195 : 243));
                var_18 = ((((((((arr_0 [i_1]) / (arr_2 [i_0]))) + (0 - 82)))) ? -9 : (arr_9 [i_1] [i_1] [i_1])));
            }
        }
    }
    var_19 = (32572 % 5948715728789410093);
    #pragma endscop
}
