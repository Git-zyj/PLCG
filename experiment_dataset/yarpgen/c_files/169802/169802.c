/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, var_7));
        var_17 |= (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (((arr_3 [i_0] [6]) ? -30 : (arr_0 [i_0])))));
        var_18 = (~var_13);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_19 = (min(var_19, ((((27877 * (arr_0 [i_1 - 1])))))));
        arr_8 [0] [0] &= (!var_6);
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 &= (arr_11 [4] [4]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 &= ((+(((arr_13 [i_2] [i_3 + 2] [i_2]) ? (arr_14 [i_2]) : var_11))));
                    var_22 ^= var_15;
                    arr_18 [i_3] [i_3] = (arr_16 [i_2] [i_3 - 1] [i_3 - 1] [1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_5] [i_5] [i_8] [i_9] = ((var_14 >> ((((-(arr_27 [i_7] [i_8] [i_8]))) - 4246139533))));
                                arr_34 [i_5] [1] [i_9] = ((((max((arr_28 [8]), var_13))) ? ((min((arr_28 [i_6]), (arr_28 [1])))) : (((arr_28 [i_8]) ? 27889 : -5563))));
                            }
                        }
                    }
                    var_23 = (((arr_24 [i_5]) + (arr_24 [i_7])));
                    var_24 = (min(var_24, (((+(((arr_29 [i_5] [i_5] [i_6] [i_7]) << (((((arr_20 [i_7] [18]) / (arr_19 [i_7]))) - 82395)))))))));
                    arr_35 [i_5] [i_5] [5] [i_7] = ((((max(((27870 ? 27877 : 8693048863080421431)), (((arr_28 [1]) ? (arr_20 [i_5] [i_7]) : (arr_23 [16])))))) ? (arr_30 [15] [i_7] [i_6] [i_5]) : (((arr_28 [i_5]) ? (((max(var_5, (arr_28 [i_6]))))) : (((arr_30 [i_5] [i_6] [i_6] [i_7]) - 1))))));
                }
            }
        }
    }
    #pragma endscop
}
