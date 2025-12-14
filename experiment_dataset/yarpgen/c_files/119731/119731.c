/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (arr_9 [i_1] [i_2] [i_1] [i_0]);
                    var_18 = arr_1 [i_0] [0];
                }
            }
        }
    }
    var_19 ^= (((min(var_8, var_4))));
    var_20 = (max(var_20, (var_2 + var_8)));
    var_21 = ((((((((var_0 ? var_2 : var_1))) ? var_10 : 1030792151040))) ? var_12 : (((((17944029765304320 ? 3529 : -433497517))) ? 433497530 : ((1 ? -1107033594634033246 : -1873293762))))));
    var_22 = (!var_4);
    #pragma endscop
}
