/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_6;
    var_18 = var_8;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (((arr_2 [i_0] [i_2 - 1]) != (((arr_3 [i_1 - 1]) ? var_14 : (arr_2 [i_1 - 1] [i_2])))));
                    arr_13 [i_0 + 1] [i_1] [i_2] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
