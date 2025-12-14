/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [4] [i_0] = (var_4 && var_6);
                arr_5 [i_0] [7] [i_0] = (17275318685357101916 << (17275318685357101915 - 17275318685357101900));
                var_14 = (min(var_6, (arr_3 [i_1])));
            }
        }
    }
    #pragma endscop
}
