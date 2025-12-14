/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max(((((arr_2 [i_1 - 1]) % ((max(3359, -25002)))))), ((var_10 - (arr_3 [i_0] [i_1] [i_1 - 1]))))))));
                    var_15 = (arr_5 [i_2] [i_2]);
                }
            }
        }
    }
    var_16 = (min(var_16, (((1 ? var_2 : 147)))));
    var_17 = var_7;
    #pragma endscop
}
