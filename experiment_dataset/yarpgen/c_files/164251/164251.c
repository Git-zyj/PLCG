/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 ? var_8 : ((((min(var_11, var_9))) / ((min(var_14, var_14)))))));
    var_20 = min(12032941707960535863, 31001);
    var_21 = (((var_1 == (~var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (arr_3 [i_0] [i_1]);
                var_23 = (((((arr_0 [i_1]) / (arr_3 [i_0] [i_0]))) >= ((34534 ? 0 : (~1)))));
            }
        }
    }
    #pragma endscop
}
