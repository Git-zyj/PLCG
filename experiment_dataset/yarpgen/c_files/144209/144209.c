/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!496366982);
    var_20 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_5 [i_1])));
                var_22 = (((min(4110287575736298836, (arr_4 [i_0 - 3]))) | (~var_3)));
                arr_6 [i_0] [i_1 - 3] [3] = ((var_4 || ((min(1307, (79 >= 20351))))));
            }
        }
    }
    var_23 = var_18;
    #pragma endscop
}
