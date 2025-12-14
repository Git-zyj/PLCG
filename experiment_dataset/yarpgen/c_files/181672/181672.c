/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((+((min((arr_5 [1] [i_1] [i_1]), var_4))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 &= var_16;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_13, var_8));
                                arr_13 [2] [i_0] [i_1] [i_3] [i_1] [i_2] = ((((~(arr_7 [6] [11] [i_2 + 2] [i_0] [i_4]))) + (((+(((arr_1 [i_0]) / 1)))))));
                                var_21 = ((0 ? 380124865 : ((29233 ? (((var_7 ? 96 : 13))) : 140736951484416))));
                                var_22 &= (min(var_16, ((var_3 ? (((arr_5 [i_0] [i_2] [i_1]) ^ (arr_0 [i_1]))) : (arr_6 [i_4] [i_1] [i_0])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_23 = (1 * 1);
                        var_24 *= ((~(min((~783896744), var_14))));
                        arr_16 [i_5] [i_2 + 3] [i_1] [i_5] |= (arr_15 [i_2] [i_1] [0]);
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_25 ^= var_5;
        arr_20 [i_6] = 31887;
        var_26 = ((((((((var_2 ? 42199 : var_1))) ? (((arr_18 [i_6]) ? var_2 : (arr_18 [i_6]))) : 0))) ? (((arr_19 [i_6]) ? ((var_7 & (arr_18 [i_6]))) : (var_14 | var_12))) : (-32767 - 1)));
        arr_21 [i_6] [i_6] = (max(65517, (((arr_18 [i_6]) ? ((var_3 ? var_12 : var_4)) : (arr_17 [i_6])))));
        var_27 = (max(1835439089, 2990));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (((((var_3 ? 1792 : (arr_23 [i_7] [i_7])))) ? ((-2097152 ? var_3 : (arr_23 [i_7] [i_7]))) : var_0));
        var_28 += 1;
    }
    #pragma endscop
}
