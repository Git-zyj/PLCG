/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((var_9 ? (((((6810751621750035432 ? var_14 : 74))) ? var_12 : ((max(var_17, var_12))))) : (~var_4)));
                var_21 = var_2;
                var_22 = (max(var_22, (((((((max((arr_1 [i_0]), (arr_1 [i_1])))) ? var_2 : (arr_0 [i_1]))) <= ((((arr_1 [i_0]) != ((((arr_2 [8] [8]) ? var_13 : var_5)))))))))));
            }
        }
    }
    var_23 = (max(var_16, var_6));
    var_24 = (!-1);
    #pragma endscop
}
