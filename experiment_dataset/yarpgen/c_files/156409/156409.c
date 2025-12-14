/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_13, (min(var_11, ((max(var_12, var_1)))))));
    var_19 = var_2;
    var_20 = (min(var_20, -var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (((24393 ? 2394456763 : 1832)));
                    var_22 = ((!((((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 + 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_23 -= ((var_9 ? (min((!var_5), (var_3 & 65535))) : var_8));
    #pragma endscop
}
