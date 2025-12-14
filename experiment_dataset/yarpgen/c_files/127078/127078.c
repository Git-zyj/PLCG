/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));
    var_18 = (min(var_18, (((var_6 ? var_4 : ((((var_13 != (!var_5))))))))));
    var_19 = (min(var_3, (((max(var_7, var_14)) % var_15))));
    var_20 = (~13356309470561931028);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (arr_3 [6]);
                arr_4 [15] [i_0] = var_8;
            }
        }
    }
    #pragma endscop
}
