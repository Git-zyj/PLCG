/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 6;
    var_21 = (min((var_14 > var_1), -var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = var_12;
                    arr_7 [i_0] [i_0] [i_2] = ((((arr_6 [i_2] [i_2]) ? (arr_6 [i_1] [i_0]) : (arr_6 [i_0] [i_0]))));
                    arr_8 [i_0] [i_1] = var_13;
                    var_23 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
