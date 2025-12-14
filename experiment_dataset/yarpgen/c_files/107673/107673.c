/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 *= ((arr_4 [i_0] [7] [i_0]) ? ((min((arr_3 [i_1 + 3]), -7618920745927027917))) : ((((((min(var_1, (arr_0 [6] [i_1])))) && (arr_0 [i_0] [i_0]))))));
                var_11 = ((var_3 << (var_1 + 17122)));
                var_12 *= (min((max((arr_0 [i_1 + 3] [i_1 + 4]), (arr_0 [i_1 + 3] [i_1 + 3]))), ((11929517211756961108 ? (arr_0 [i_1 - 2] [i_1 + 2]) : (arr_0 [i_1 + 2] [i_1 + 4])))));
            }
        }
    }
    var_13 = (max(var_13, ((min(((max((!-55), 6517226861952590507))), (~var_3))))));
    var_14 = var_9;
    var_15 = (max(var_15, ((((~var_7) - (~var_9))))));
    #pragma endscop
}
