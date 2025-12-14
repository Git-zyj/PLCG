/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((max(var_2, var_6)))) * var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_3 [i_0]) * (arr_1 [i_0] [i_0])))) ? -534811696 : (~4294967295)));
                var_16 = (!(((~(arr_2 [i_0])))));
                var_17 = 1449302437;
            }
        }
    }
    #pragma endscop
}
