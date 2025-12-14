/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((var_0 / (var_10 - var_8))), 398));
    var_12 = 849361960;
    var_13 = (((3045661825 ^ var_4) ? var_6 : ((min(120, var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 *= 139;
                    arr_10 [i_0] [0] [11] = var_5;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] |= (((min((min((arr_0 [i_0]), 120)), -var_1)) > ((((arr_8 [i_0]) ? (arr_5 [i_3]) : ((max(var_3, (arr_1 [i_2] [i_0])))))))));
                        var_15 *= (((63 + (arr_6 [i_1 + 3] [i_1 + 3]))));
                    }
                    var_16 -= ((!(4277379158 && var_10)));
                }
            }
        }
    }
    #pragma endscop
}
