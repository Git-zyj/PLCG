/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_1);
    var_18 = ((((1 - 653308680) ? (((2841461171 ? var_6 : var_14))) : var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((((653308685 ? (arr_0 [i_0]) : var_2))) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_0)) : (arr_2 [i_0] [i_0])));
        var_19 = -3641658622;
        var_20 = 1271593583047532032;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (-(64929 - 0));
                    var_21 = (((!1) - ((-102 + (arr_2 [i_1] [i_2])))));
                    arr_10 [i_0] [i_0] [i_1] = var_4;
                    var_22 = (arr_1 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
