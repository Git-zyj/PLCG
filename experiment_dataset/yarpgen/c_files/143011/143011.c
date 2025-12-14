/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [1] [i_0] = (arr_4 [i_1] [1] [i_1] [i_0]);
                    arr_7 [i_1] [i_0] [i_1] = (max(((max((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1])))), (((arr_3 [i_0 - 1] [i_0 + 1]) ? var_1 : 12098617776994458977))));
                }
            }
        }
    }
    var_10 = (max(var_10, (((((max((max(var_1, var_4)), var_6))) ? ((-(max(var_4, 109)))) : (((((max(7, -17828))) ? var_2 : (-5923919666301321163 && var_9)))))))));
    var_11 = var_7;
    #pragma endscop
}
