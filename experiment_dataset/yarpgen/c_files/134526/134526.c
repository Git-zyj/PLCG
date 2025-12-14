/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_3;
                var_14 = (!1514248508);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, var_4));
                            arr_12 [8] [i_1] [19] [i_1] = var_5;
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, ((min(var_2, (max((max(var_7, var_5)), var_11)))))));
    #pragma endscop
}
