/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((max(((min(var_9, 0))), 1))))));
    var_16 = (min(((~(~var_11))), 0));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_18 = (((-19366 + 2147483647) << (2288586150410615073 - 2288586150410615073)));
                    arr_7 [i_0] [i_2] [i_1] = ((((((33736 == ((min(var_13, 1))))))) == -91));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (((-(1 <= 64292))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_3] [i_3] = 0;
                    arr_13 [6] [14] [6] &= ((~((max(56247, 1)))));
                    var_19 = (!1);
                }
                arr_14 [i_0 - 1] = ((-var_2 ? (~27754) : (!1)));
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
