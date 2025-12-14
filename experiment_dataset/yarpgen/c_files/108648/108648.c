/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        arr_4 [i_0] [13] = ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_5 [i_0] = var_1;
    }
    var_15 = 4294967295;
    var_16 = (~var_5);

    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = var_10;
        var_17 = 3885925894;
        var_18 = (arr_1 [i_1] [15]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_19 = ((var_9 ? 22 : var_8));
                        arr_19 [i_2] = (((~4294967249) ? 36053 : ((var_2 ? 18446744073709551615 : 4294967292))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [i_2] [i_2] = var_2;
                        var_20 = (arr_16 [i_2] [i_3] [i_4] [i_6]);
                    }
                    arr_24 [i_2] [i_3] [i_2] [i_2] = (8 ? ((var_3 ? var_2 : (arr_16 [i_2] [i_3] [i_4] [i_2]))) : 1);
                }
            }
        }
        arr_25 [i_2] = ((arr_12 [i_2] [i_2] [i_2]) ? (arr_12 [i_2] [i_2] [i_2]) : (arr_9 [i_2]));
        var_21 = 1;
        arr_26 [i_2] = var_13;
    }
    #pragma endscop
}
