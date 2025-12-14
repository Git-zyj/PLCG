/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -0;
    var_15 = (min((max((max(var_1, 192)), var_12)), var_7));
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = var_13;
                    var_18 = (((min((min(var_5, 192), (max(var_7, var_13)))))));
                    arr_7 [i_0] [i_1] [i_0] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
