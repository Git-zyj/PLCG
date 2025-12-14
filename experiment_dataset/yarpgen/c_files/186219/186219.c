/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (((16323439115157986943 != 127) ? var_16 : 2123304958551564672));
                var_18 = (min(var_18, var_8));
                var_19 = (max(var_19, ((min(var_11, (!1))))));
                var_20 = (max(var_9, ((-(max(45442, var_7))))));
                var_21 = ((!(~var_10)));
            }
        }
    }
    #pragma endscop
}
