/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 += (((((var_2 ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 3])))) ? (min(-4027, -1854947993)) : ((-(arr_2 [i_0] [i_1 + 1] [i_2])))));
                    var_17 = (min(var_17, (arr_0 [i_0])));
                }
            }
        }
    }
    var_18 = ((min(((max(var_4, var_13))), var_11)));
    var_19 = (((var_6 / -var_0) < -618266548));
    var_20 = (min(4027, 2081172633));
    var_21 = (min((~var_7), ((var_9 ? var_14 : 4095))));
    #pragma endscop
}
