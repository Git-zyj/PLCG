/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((-9223372036854775807 - 1), ((var_5 ? -8067379754630688662 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = (max(var_12, ((min(((((arr_1 [i_0 + 1] [i_0 - 1]) > var_6))), var_0)))));
                        var_13 = (max(var_13, ((((((7472149445112113450 % (-2147483647 - 1)))) ? (max(((max(61047, 1))), (165 & 1))) : 113)))));
                        arr_11 [16] [i_2] [i_2] [i_0] = var_1;
                    }
                    var_14 = (min((((((var_9 || (arr_1 [i_0] [i_2]))) && (arr_2 [i_0 + 2] [i_0 - 1] [16])))), var_5));
                }
            }
        }
    }
    var_15 = (max(var_15, (((var_0 ? (!var_4) : (((-32767 - 1) ? var_5 : (min(var_0, 1228195824)))))))));
    #pragma endscop
}
