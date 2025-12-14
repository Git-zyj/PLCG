/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (var_5 != -var_4);
                    var_19 = (((var_4 & var_11) ? var_11 : (~var_4)));
                    var_20 = (max(var_20, (((-655350866 + (898514142 | 1528672066))))));
                }
            }
        }
    }
    var_21 = (var_6 - var_8);
    var_22 = var_10;
    var_23 = ((var_14 - (((var_6 * var_6) + -var_1))));
    #pragma endscop
}
