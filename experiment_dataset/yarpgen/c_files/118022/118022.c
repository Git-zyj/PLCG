/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 |= (var_10 / 2993642473987635346);
    var_21 = ((var_4 ? var_14 : var_9));
    var_22 = ((-((~(max(var_3, 2993642473987635352))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_23 &= ((~(arr_2 [i_1 - 3])));
                var_24 = (min(var_24, ((((max((arr_1 [13]), var_18))) ? (1058910632060466305 - var_18) : (arr_3 [i_1 - 2] [i_1 - 4])))));
            }
        }
    }
    #pragma endscop
}
