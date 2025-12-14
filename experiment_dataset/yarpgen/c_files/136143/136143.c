/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_7;
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((230 ? (-5013028398516260279 - 2595574562257351162) : (((2863821905607899917 + (((21901 ? 1 : 32190))))))));
                    var_20 -= (min(((+(((arr_3 [i_0]) / (arr_7 [19] [4] [i_2]))))), (--552119883)));
                    var_21 = ((!((((arr_1 [i_1]) ? var_1 : 18601)))));
                }
            }
        }
    }
    var_22 -= -var_3;
    #pragma endscop
}
