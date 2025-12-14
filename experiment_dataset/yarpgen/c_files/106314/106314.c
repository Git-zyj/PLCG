/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((min((min((arr_5 [i_2 + 2]), var_10)), ((var_7 / (arr_5 [i_0 + 3]))))))));
                    var_17 = (max(var_17, (((~((-((-31 ? (arr_0 [i_2]) : (arr_4 [i_2] [14] [2]))))))))));
                    arr_8 [i_0] [i_1 + 1] [i_2] = var_2;
                }
            }
        }
    }
    var_18 = (var_2 < -var_15);
    #pragma endscop
}
