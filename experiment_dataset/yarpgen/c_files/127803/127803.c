/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((((max(((0 ? (arr_2 [i_0]) : 16867)), ((((arr_1 [i_0]) ? 14336 : 324765834)))))) ? (!0) : ((((max(0, (arr_3 [16])))) & (arr_3 [i_1 - 1])))));
                var_14 = var_6;
                var_15 -= ((((min((arr_0 [i_1 + 4] [i_1 - 1]), (arr_4 [i_1 + 2] [i_1 + 1])))) ? ((((arr_0 [i_1 + 4] [i_1 + 4]) >= 1))) : (arr_2 [16])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_7 [i_2] = ((((min((arr_6 [i_2 + 1]), 13978764269055088196))) && (arr_5 [i_2 + 1])));
        arr_8 [1] = (arr_5 [i_2]);
        arr_9 [i_2] = ((1 ? 65535 : 61221));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_16 = 1;
        arr_12 [i_3] = (((36726 == 1) / (min(55123, (arr_10 [i_3 + 2])))));
    }
    var_17 = (~var_11);
    var_18 = (((((((var_6 ? var_5 : 13312))) ? ((var_3 ? var_9 : var_1)) : var_11)) & (var_0 <= var_8)));
    #pragma endscop
}
