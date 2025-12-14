/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((((arr_4 [i_1 + 2] [i_2 - 1] [i_2 + 1]) <= (var_3 & var_5))) || (((((max(var_3, var_4))) ? -var_1 : var_3)))));
                    var_19 = ((~(((arr_5 [i_0] [16] [i_2]) ? (min(var_14, var_6)) : (42979 != 1)))));
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
