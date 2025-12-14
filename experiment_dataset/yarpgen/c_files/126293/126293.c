/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_11 = (((((((1 ? 32766 : 1693288753))) ? ((1311661598 ? var_6 : 15905407844669290408)) : -127))) ? (12902 - 49655) : ((((654502734 ? -2927573437607893014 : var_1)) + var_2)));
        arr_2 [i_0] = (-114 == 127);
        arr_3 [i_0] [i_0 - 3] = (((65535 - -1693288763) ^ (-2147483647 - 1)));
    }
    var_12 = (max(var_12, (((var_7 / ((4019829871999563592 >> (10788568078739437885 - 10788568078739437858))))))));
    var_13 = -1805448857;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = var_8;
                    arr_10 [i_1] [i_2] [0] &= 683769245056396320;
                    arr_11 [i_2] [i_2] [i_2] [i_2] = (~1);
                }
            }
        }
    }
    #pragma endscop
}
