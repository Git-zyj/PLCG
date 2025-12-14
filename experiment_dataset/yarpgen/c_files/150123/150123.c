/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = ((-(arr_1 [i_0 - 1])));
        arr_2 [i_0 + 1] = (((49 && 3474) != -var_2));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] = (max(((max((var_8 < var_4), ((0 ? var_9 : var_4))))), ((var_5 & ((((arr_3 [i_1]) ? 0 : -101)))))));
                        var_12 = (max(var_12, (arr_6 [i_4 + 1])));
                    }
                }
            }
        }
        var_13 = (min(var_13, var_10));
        var_14 = (arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1]);
        var_15 = (max((255 > var_2), (arr_6 [i_1])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((0 / ((-((min((arr_25 [24] [i_6] [i_7 + 1]), var_0))))))))));
                                arr_31 [i_5] [i_5] [i_7] [i_8] [i_8] = var_8;
                            }
                        }
                    }
                    var_17 = (((((-(arr_27 [i_5] [i_5] [i_5] [8] [i_7] [i_7 + 1])))) ? var_4 : ((min(1, (arr_27 [i_5] [i_5] [i_5] [16] [16] [i_7 - 1]))))));
                }
            }
        }
        arr_32 [i_5] = 255;
        arr_33 [i_5] [i_5] = (((var_6 > (((var_4 << (var_7 - 5816874853183517279)))))));
        arr_34 [i_5] = var_1;
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 7;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 8;i_12 += 1)
            {
                {
                    var_18 = var_4;
                    var_19 += 1;
                    arr_44 [i_10] [i_10] = ((-((max((arr_35 [i_12 - 3] [i_10]), var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
