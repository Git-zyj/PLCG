/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_1] |= 44341;
                    arr_7 [i_2] [i_1 - 1] [i_0 + 2] = (arr_4 [i_2] [i_1 + 1]);
                }
            }
        }
    }
    var_20 = (((var_18 && var_16) > (max(((min(-32766, -10))), (10806012846345402377 + 32767)))));
    var_21 = var_16;
    var_22 = var_3;
    #pragma endscop
}
