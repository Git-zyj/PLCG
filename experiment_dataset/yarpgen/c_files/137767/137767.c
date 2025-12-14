/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = arr_2 [i_1];
                var_21 -= 288230376151711743;

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_22 = ((-((((arr_0 [i_2 + 2]) || (arr_0 [i_0 + 2]))))));
                    arr_9 [i_0] [i_1] [i_1] = -557750505;
                    var_23 = var_10;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_24 = (((((~(((!(arr_12 [i_0] [i_1] [1]))))))) ? (min(((-1012125730417709780 ? 122 : 8769219968477891961)), ((-(arr_2 [i_0]))))) : (~0)));
                    arr_13 [i_1] [i_1] [i_3] = -1453305848287774709;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_5] [21] [i_1] = ((-((var_0 ? ((288230376151711743 ? var_16 : 557750505)) : var_10))));
                                var_25 = ((((arr_16 [i_0 - 1] [i_1] [i_3] [i_5 - 1]) % (arr_16 [i_0 + 3] [i_4] [i_5] [i_5 + 1]))) >> (7821 - 7795));
                            }
                        }
                    }
                    arr_21 [i_3] [i_3] |= (max((max(25228, (min(192, (arr_2 [i_0]))))), (((66 ? -1 : (!173585263))))));
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    var_26 = (max((min((~var_14), (arr_16 [i_6 - 1] [i_6 - 1] [i_6] [i_6]))), 18158513697557839872));
                    var_27 -= (max(1914692660, -7178922622914320252));
                    var_28 = min((arr_6 [i_1] [i_1] [i_6]), ((((min(var_7, var_15))) ? (max(-1453305848287774709, -3343054856961704131)) : -1453305848287774709)));
                }
            }
        }
    }
    var_29 ^= ((((((((var_16 ? var_0 : var_19))) | var_13))) ? (((((max(var_12, var_17))) ? var_12 : var_17))) : var_3));
    var_30 = (min(var_30, 8980780846727849880));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_31 = (((var_6 <= 32) - (arr_33 [i_9] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])));
                                arr_37 [i_7] [i_8] [i_9] [i_10] [i_11] = (((((max((arr_33 [13] [i_9] [12] [i_10 + 1] [11]), 1)))) ? ((1982797526 ? ((243 ? 213 : (arr_31 [i_7] [i_8] [i_9] [i_10]))) : (~var_15))) : -8));
                            }
                        }
                    }
                    arr_38 [i_7] [i_7] = -50;
                    var_32 = 65535;
                }
            }
        }
    }
    var_33 = (min(185, 29477));
    #pragma endscop
}
