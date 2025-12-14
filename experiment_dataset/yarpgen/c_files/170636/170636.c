/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((-(((((max(-122, 127)))) + ((9223372036854775807 ? (arr_6 [i_1] [i_0]) : var_0))))));
                var_19 += (((arr_5 [i_0]) ? ((var_11 + (arr_1 [i_1]))) : (((var_4 || (~var_9))))));
            }
        }
    }
    var_20 &= var_9;
    var_21 = (max(var_9, -30281));
    #pragma endscop
}
