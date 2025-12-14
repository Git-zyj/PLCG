/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (((((max(-38, 32)))) / ((var_6 ? var_7 : (~var_9)))));
                var_12 = min(var_3, (min((var_4 - -26), -var_5)));
                arr_6 [i_0] = (arr_1 [21]);
            }
        }
    }
    var_13 |= (min(var_10, ((var_5 ? var_0 : ((var_7 ? -28 : var_4))))));
    var_14 = var_2;
    var_15 = -26;
    var_16 = (-27826 <= 82);
    #pragma endscop
}
