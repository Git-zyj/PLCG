/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_16 = ((7717 ? 5 : (-9223372036854775807 - 1)));
                    var_17 *= (((-16 + var_8) ? ((4294967274 ? var_2 : 24808)) : (!122)));
                }
                var_18 = ((+((-11247 ? ((min((arr_6 [i_0] [i_0 - 2] [i_1] [i_0 - 2]), 3041004782))) : (min(-1864757104317647231, -1551543470))))));
                var_19 = (max(var_19, (((1 & (arr_0 [i_1] [i_1]))))));
            }
        }
    }
    var_20 = (max(var_20, (2843247826 > 102)));
    var_21 = ((var_4 ? (~var_5) : (((~var_9) ? (~5634) : ((127 ? 13202 : 580992157))))));
    var_22 = var_11;
    #pragma endscop
}
