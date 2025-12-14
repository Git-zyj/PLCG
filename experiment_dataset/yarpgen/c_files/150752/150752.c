/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (((arr_4 [i_2] [i_0] [i_2] [i_0]) ? ((min(-38521, var_8))) : (((!34340) ? 36088 : -357818096122887302))));
                    var_18 = (max(var_18, var_12));
                    var_19 = (max(var_2, ((min(357818096122887319, 1)))));
                    var_20 *= 357818096122887301;
                }
            }
        }
    }
    var_21 = (min(((((min(var_9, var_9))) ? 207 : var_3)), var_11));
    var_22 = var_5;
    #pragma endscop
}
