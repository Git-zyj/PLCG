/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (((((((min(20041, (arr_5 [i_1] [i_2 - 1])))) << ((((arr_6 [i_2] [i_0] [i_1] [i_0]) || (arr_5 [i_2] [i_1]))))))) ? 39629 : ((~((46 ? 0 : 61))))));
                    var_19 &= 51379;
                    arr_8 [i_0] [i_1] [i_1] = arr_0 [14] [i_0];
                    arr_9 [i_0] [i_0] [16] [23] = ((43374 % ((var_5 & (arr_6 [i_0] [i_2] [i_2] [i_1])))));
                }
            }
        }
    }
    var_20 = (((((min(0, -83))) <= -28)));
    #pragma endscop
}
