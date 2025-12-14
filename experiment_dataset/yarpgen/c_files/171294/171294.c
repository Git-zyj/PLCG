/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0] |= ((0 ? 1 : (!1)));
        var_17 = 1;
        var_18 = 1;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_19 = ((((((var_13 ? var_13 : 1)))) ? 1 : (min(1, (!1171642373906222547)))));
                        arr_15 [i_3] [i_3 + 1] [i_2] [2] [2] = (((((min(var_2, var_8)))) / 2090476600));
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = ((~((~(max(42, 6482825050761660137))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [0] [i_5] = (max((max(var_3, (1 * 1))), -2));
                    arr_25 [i_5] [i_5] = 3;
                }
            }
        }
    }
    #pragma endscop
}
