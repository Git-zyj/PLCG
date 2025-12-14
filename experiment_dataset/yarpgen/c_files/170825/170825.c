/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = var_9;
    var_22 = (max(var_22, ((((((var_4 ^ var_0) & (~29))) | var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 &= (~4881);
                    var_24 = ((max(1, var_16)) + (~var_11));
                    var_25 = (min((((((((arr_1 [i_0]) && 8))) | ((min(var_7, (arr_3 [i_2] [i_1] [i_0 + 2]))))))), (arr_2 [i_0 + 1])));
                    var_26 &= (((-4265 * var_2) <= 0));
                }
            }
        }
    }
    #pragma endscop
}
