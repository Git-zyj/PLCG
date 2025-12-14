/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = ((536869888 ? ((~(arr_4 [i_1] [i_2] [i_2] [i_2 - 1]))) : (((min(var_2, var_4))))));
                    arr_6 [i_0] [i_0] [i_0] = var_5;
                }
            }
        }
    }
    var_12 = max(-536869884, ((((var_5 ? var_5 : -536869899)))));
    #pragma endscop
}
