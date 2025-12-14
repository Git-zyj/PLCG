/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(~var_8)))) ? ((var_3 << (var_0 - 2731479522565973796))) : var_1));
    var_17 = ((1 ? 3932160 : (max((max(var_5, 28920)), var_3))));
    var_18 = (-(max(var_6, var_0)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (((arr_2 [i_0 - 4]) ? ((~(arr_2 [i_0 - 4]))) : (~var_13)));
                    arr_10 [9] [i_0] [i_1 + 1] [i_2] = (((arr_6 [3]) >= ((~((-93 ? var_8 : var_4))))));
                    var_19 = (max((~var_13), (max((max(7592708370288580992, 1)), ((((arr_0 [i_1]) ^ -38)))))));
                    var_20 = (min(var_20, (arr_6 [i_2])));
                    var_21 = (max((((arr_2 [1]) + var_0)), (((max(var_2, var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
