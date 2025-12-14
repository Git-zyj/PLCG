/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (var_1 * 3400725410);
    var_20 *= 53968;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (arr_0 [i_0] [1]);
                arr_6 [i_0] [i_0] [i_1] = ((((min(((min((arr_3 [i_0] [i_1]), var_9))), var_15))) ? 3541385650 : ((((min(0, 895927456)))))));
            }
        }
    }
    var_21 = (((max((var_0 / 11573), var_15)) + ((var_13 ? var_9 : (min(var_13, 53968))))));
    #pragma endscop
}
