/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (~var_0);
                var_21 = ((((((min(var_9, (arr_1 [i_0]))) / (~var_19)))) ? (max(((12221484362157829762 ? var_7 : var_0)), var_12)) : var_9));
                var_22 = (max(var_22, (((((arr_0 [i_0 + 2] [i_0 + 1]) <= (((-108 >= (arr_2 [i_0]))))))))));
            }
        }
    }
    var_23 = ((var_2 ? var_11 : (((max(var_3, 77))))));
    var_24 = var_1;
    #pragma endscop
}
