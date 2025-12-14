/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(((-(~1350592152))), ((min((~-274783100), ((min(var_8, var_2))))))));
                var_16 = (max(var_16, (((((((arr_4 [i_0] [i_1]) ? (~606232189) : ((~(arr_3 [i_1])))))) ? (((-(!-1716654256)))) : 4041152549)))));
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
