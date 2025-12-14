/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (!20423);
                    var_13 = (min(var_13, ((((((~var_1) ? -var_6 : 17))) / (((!var_10) ? (max(var_0, var_4)) : (((var_5 ? 20423 : var_6)))))))));
                    arr_10 [i_1 - 2] [i_0] [15] [i_1 - 2] = ((!((max(var_5, var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
