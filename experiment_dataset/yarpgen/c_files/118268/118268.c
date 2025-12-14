/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (3326992048560388335 >= 3326992048560388335);
    var_11 = var_5;
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = var_6;
                    var_14 = (min(var_14, (arr_0 [i_2 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
