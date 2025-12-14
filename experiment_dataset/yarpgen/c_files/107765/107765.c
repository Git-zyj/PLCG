/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 = ((1 ? var_2 : (((var_0 ? var_3 : ((-2609809246096609629 ? 187 : var_7)))))));
                        var_11 = (((~15) ^ (((~((896 ? var_7 : var_1)))))));
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = (-9223372036854775807 - 1);
                    }
                    arr_11 [i_2] [i_1] [1] [i_1] = 30153;
                }
            }
        }
    }
    var_12 = (var_0 != 1701368480);
    var_13 = (((((1 ? (!var_6) : var_1))) ? (((var_2 ? var_9 : -5657142497577022777))) : (!1593287502)));
    var_14 = ((-0 ? 1 : var_2));
    #pragma endscop
}
