/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((44 ? 16424166894463349408 : 1)) | (~var_0)));
        var_12 = (arr_1 [i_0]);
    }
    var_13 = ((((min((var_6 - 548810206), 233))) ? (min(var_0, var_7)) : (((-(max(var_8, var_7)))))));
    var_14 = (!-1672271160);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_7 [i_1] [i_2] [i_2] = var_11;
                arr_8 [i_1] [i_1] [i_1] = ((((var_1 ? (arr_4 [i_2]) : (arr_1 [i_1]))) + ((((((arr_4 [i_2]) ? var_3 : (arr_5 [i_1] [i_1] [i_1]))) % var_9)))));
            }
        }
    }
    #pragma endscop
}
