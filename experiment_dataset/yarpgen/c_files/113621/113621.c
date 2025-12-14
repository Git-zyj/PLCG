/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((((((((var_12 ? var_7 : var_15))) ? var_14 : ((max(var_15, 41)))))) ? ((((arr_4 [i_0] [i_1]) & (arr_2 [i_1])))) : ((((((arr_1 [15] [i_1]) & (arr_2 [i_0])))) ^ ((var_7 ? 824907637 : var_5))))));
                var_19 = var_6;
            }
        }
    }
    var_20 = (8213300792802244761 ? ((59 ? (var_14 * var_7) : ((var_6 ? var_17 : var_4)))) : -var_2);
    var_21 = 9827;
    var_22 = (max(var_22, ((min(((var_11 ? (((var_7 ? 15 : var_6))) : ((55708 ? var_12 : var_8)))), var_4)))));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_23 = (min(var_23, ((max((arr_5 [16]), (max(244, (arr_5 [4]))))))));
        arr_7 [i_2] [i_2] = ((var_7 ? (arr_5 [i_2]) : ((((max((arr_6 [i_2]), var_12))) ? (((var_0 ^ (arr_6 [2])))) : ((var_10 ? (arr_6 [i_2]) : -6406269086331535407))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_24 &= ((((((240 ^ var_9) ? (arr_5 [i_3]) : ((15 ? var_13 : var_17))))) ? ((var_0 ? (arr_9 [i_3] [i_3]) : (arr_9 [i_3] [i_3]))) : (min((arr_5 [i_3]), (arr_6 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_25 = (((-(arr_9 [i_5] [i_6]))));
                                var_26 = ((var_0 ? ((-25 ? 210 : 255)) : (max(67108864, 9821))));
                                var_27 &= ((((((arr_6 [i_4 + 1]) ? (arr_6 [i_4 + 1]) : var_7))) ? (((arr_9 [i_4 + 1] [i_3]) * var_15)) : (min((arr_15 [i_4 - 1] [i_4 - 2]), (arr_12 [i_3] [i_3] [i_5])))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_28 = (~var_16);
                        var_29 = (((((-(arr_11 [i_4 - 2] [i_4 + 1] [i_4 - 2])))) ? var_15 : -4915686132294429081));
                        var_30 = (max(var_30, ((-8364227955656656583 & ((min(var_2, ((130816 ? 163674176 : -25)))))))));
                    }
                    var_31 = (max((arr_11 [i_3] [i_5] [i_5]), (~44283)));
                }
            }
        }
        var_32 = ((((((max(8924649474283149016, var_2)) / (arr_8 [i_3] [i_3])))) ? ((-((min(var_15, 64))))) : var_11));
    }
    #pragma endscop
}
