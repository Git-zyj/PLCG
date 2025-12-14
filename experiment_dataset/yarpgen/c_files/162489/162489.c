/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 |= 1;
                    var_19 = (21557 % 602716278);
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 1] = var_12;
                    var_20 |= (arr_4 [4] [i_2 - 1]);
                    var_21 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
