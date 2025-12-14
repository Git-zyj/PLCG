/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((max(var_9, 56701)) ^ var_12))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (arr_5 [i_0 - 3] [i_2]);
                    var_17 = (min(var_17, var_3));
                }
            }
        }
    }
    var_18 = ((((((var_8 != var_9) * (!1110069575011753969)))) || (var_13 | -var_13)));
    #pragma endscop
}
