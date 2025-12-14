/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (min(var_7, 4121712376));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_0] [12] [i_0] [i_0] = var_6;
                    var_14 = ((2177684157 >> (-1960190789 + 1960190794)));
                    var_15 = arr_6 [12] [i_1];
                }
            }
        }
    }
    #pragma endscop
}
