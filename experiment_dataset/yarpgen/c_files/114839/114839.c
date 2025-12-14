/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (!-var_5);
    var_14 = (max(var_14, (((-(!-1290000083))))));
    var_15 = (+-var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_1 - 2] = -231;
                    arr_10 [i_0] [i_1] [3] [i_0] = ((-(~-3459606134927418900)));
                }
            }
        }
    }
    var_16 -= (~30554);
    #pragma endscop
}
