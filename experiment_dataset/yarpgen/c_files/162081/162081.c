/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((max(6, 4096130787633042609)) >> ((((547650089 ? 20354 : var_9)) - 20299)))), ((max(var_11, (6 << 23))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_1] [2] [i_3] |= (((65512 / 27) / ((-((65519 ? var_6 : 64512))))));
                        var_13 = ((~(arr_5 [i_0])));
                        var_14 = (max(var_14, var_8));
                    }
                }
            }
        }
        var_15 = (min(var_15, (min((((88 / (arr_1 [i_0 + 1])))), ((1 ? var_11 : -5837671163915512913))))));
        arr_11 [i_0] = ((-(((((var_0 ? var_5 : var_8))) ? 1 : (~2065566601)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_20 [1] [2] [i_5] [i_0] |= (!197);
                    arr_21 [i_0] [i_5] = min(-var_9, (--40389));
                }
            }
        }
    }
    #pragma endscop
}
