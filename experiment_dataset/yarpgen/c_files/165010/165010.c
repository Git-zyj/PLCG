/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_1 ? (((8 + 12288) * var_4)) : (((min(var_4, var_4)))))))));
    var_11 = (min(var_11, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((!-8723901868110986280) ? (arr_3 [i_0] [i_1]) : (min(((min(255, (arr_3 [i_0] [i_1])))), (arr_2 [i_1] [i_1 - 3] [i_0]))));
                arr_5 [i_0] = (((arr_0 [i_1] [i_0]) * var_0));
                arr_6 [i_0] [i_1 - 3] = var_8;
            }
        }
    }
    #pragma endscop
}
