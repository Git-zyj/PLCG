/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~(var_6 != var_2))));
    var_16 = ((-(var_10 / 20679)));
    var_17 = (((20678 | 120) << ((((((~((5565113281826189445 ? 9338 : var_12)))) + 9370)) - 24))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 3;
        var_18 = ((((arr_1 [i_0] [i_0]) ^ 12859)));
        arr_3 [9] &= ((!(255 || var_0)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_19 = (min(var_19, (((-(32767 * 252))))));
        var_20 = (((arr_4 [12] [i_1 + 1]) ? (arr_4 [i_1 - 1] [i_1]) : (arr_4 [i_1 + 2] [20])));
        arr_6 [i_1] [i_1] = (arr_5 [i_1 + 3]);
        var_21 = (((arr_5 [i_1 + 4]) + (arr_5 [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_22 = ((!(arr_1 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 = var_3;

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_24 = ((~(arr_0 [i_3 - 1] [i_4 + 2])));
                        var_25 = (min(var_25, (((!(-8270093162361789184 < 1666666083))))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_26 = (max(var_26, (!978598719584833608)));
                        var_27 = ((~(arr_8 [i_4 + 1] [i_3 + 1])));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_28 = (2 & 39);
                        var_29 = ((!(((16127 ? 0 : (arr_9 [i_2] [6]))))));
                    }
                }
            }
        }
    }
    var_30 = (min(var_30, ((((255 ^ -80333455) > var_14)))));
    #pragma endscop
}
