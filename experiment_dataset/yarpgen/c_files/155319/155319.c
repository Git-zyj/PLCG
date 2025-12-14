/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((!((min(var_8, var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min(67108863, (1 / 34359738367))))));
                arr_5 [i_0] [i_1] = 34359738383;
            }
        }
    }
    var_22 = -18446744039349813233;
    var_23 = (max((((var_16 >> (var_16 - 11287194930846301132)))), ((min((min(var_3, var_8)), (34359738398 != 1))))));
    #pragma endscop
}
