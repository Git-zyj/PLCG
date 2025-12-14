/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (arr_6 [i_0] [i_0]);
                    var_16 = (max(var_16, (((~((min((arr_2 [i_1] [i_2]), (arr_2 [i_1] [i_2])))))))));
                    var_17 = (((!-7) && (!var_11)));
                }
            }
        }
    }
    var_18 = (~var_8);
    var_19 = var_4;
    var_20 = var_10;
    #pragma endscop
}
