/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = (max(var_20, (((4031938517 ? (((~var_9) - var_4)) : (!95))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((~((((((arr_0 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_3 [i_0])))) ? 95 : ((var_1 ? var_9 : var_8))))));
                arr_5 [i_0] [i_0] = ((~((-(arr_3 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = -96;
                arr_10 [i_3] = 9067503;
                var_22 = 1163864073;
                var_23 = (~-21018);
            }
        }
    }
    #pragma endscop
}
