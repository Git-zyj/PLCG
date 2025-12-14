/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (((var_11 ? var_4 : 3289525034748026487)));
    var_19 = (((var_1 >= var_7) ^ (var_10 - var_14)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1] [i_2 + 3] [i_3 + 2] [i_2 - 1] = (arr_0 [i_3 + 2]);
                        arr_12 [1] [i_2] [1] = (((var_2 >> (15883385558508810728 - 15883385558508810724))));
                        arr_13 [i_2] [i_1] [12] [i_3] = ((var_0 ? 8266863336453269415 : (((var_11 ? 256 : var_4)))));
                    }
                }
            }
        }
        var_20 = ((var_0 == (((var_4 << (var_12 + 1720317993))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (arr_7 [i_4] [i_4] [i_4] [i_4]);
        arr_18 [i_4] [i_4] = (arr_6 [i_4] [i_4]);
    }
    var_21 = (var_8 | ((((var_9 ? var_7 : var_16)) >> ((((var_7 ? -1718933256 : 27497)) + 1718933275)))));
    #pragma endscop
}
