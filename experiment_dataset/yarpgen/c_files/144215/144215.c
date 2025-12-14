/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 ? var_11 : (((((372802791 / var_9) < 15210296640997314694))))));
    var_19 = var_0;
    var_20 = ((-((-var_17 ? (max(var_4, var_2)) : (~var_8)))));
    var_21 = (((min(var_1, var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 += (arr_1 [i_2] [i_1]);
                    var_23 = ((696267505334489648 % ((min(4958, 9223372036854775807)))));
                }
            }
        }
    }
    #pragma endscop
}
