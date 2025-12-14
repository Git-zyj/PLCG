/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 / (max(var_1, (max(var_18, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [11] [i_0] = ((+(max((arr_3 [i_0]), ((var_19 ? var_16 : 938545962))))));
                arr_5 [i_0] [i_1] [i_1] = var_6;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (max(var_21, -1457802272));
                    var_22 = (min(var_22, 2837165024));
                    var_23 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_7)) / ((max(13710, var_14)))));
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
