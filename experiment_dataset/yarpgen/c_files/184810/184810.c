/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -259584546;
    var_17 = ((((((112 && var_6) ? var_2 : (var_1 && var_12)))) && var_2));
    var_18 = var_12;
    var_19 = (max(var_19, (~8192)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((+(((178 | -182315489) ^ (~var_2)))));
                var_20 = (-16625 / 18446744073709551610);
            }
        }
    }
    #pragma endscop
}
