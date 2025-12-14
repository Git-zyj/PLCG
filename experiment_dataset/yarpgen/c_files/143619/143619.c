/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8487340134853022491;
    var_13 = (((((var_10 ? 1023 : 8487340134853022491))) - (((var_6 ? var_2 : 9959403938856529109)))));
    var_14 &= (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 -= 1;
                    arr_7 [i_0] [i_0] [i_0] = ((max((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_0] [i_2]))) >= (((min(1, var_9)))));
                    var_16 -= ((((1 ? 9223372036854775807 : (arr_0 [i_0] [i_1 + 1]))) > -var_2));
                }
            }
        }
    }
    #pragma endscop
}
