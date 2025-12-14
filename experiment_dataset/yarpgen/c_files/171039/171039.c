/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [7] [7] [i_2] = (min((arr_1 [i_0] [i_1]), ((max((3547579581 && 0), (arr_4 [i_0] [i_1] [i_0]))))));
                    arr_7 [i_1] = var_15;
                }
            }
        }
    }
    var_18 = var_6;
    var_19 = (min(((max(250, var_1))), var_9));
    var_20 = var_16;
    #pragma endscop
}
