/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((((((!(arr_6 [i_1 - 3] [i_1]))))) * (((arr_6 [i_1 + 1] [i_1]) % (arr_6 [i_1 - 3] [i_1])))));
                    var_20 -= ((((((arr_5 [i_0] [i_2]) < (min((arr_7 [i_1]), (arr_0 [i_0] [i_0])))))) > ((((arr_6 [i_1] [i_2]) <= ((max((arr_3 [i_0]), 2098008392))))))));
                    var_21 = (max(var_21, ((min((((((((arr_5 [i_2] [i_2]) ^ 1))) ? 1 : 32169))), 32193)))));
                }
            }
        }
    }
    var_22 = var_10;
    var_23 = ((10443869044017535900 ? ((var_17 ? var_15 : ((32169 ? var_17 : var_2)))) : ((((~var_7) * var_17)))));
    #pragma endscop
}
