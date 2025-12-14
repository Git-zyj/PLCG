/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((2292391689 % ((10634712672706933767 ? var_0 : var_5))));
    var_13 = (var_11 + var_2);
    var_14 = var_4;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_15 -= 65535;
        var_16 *= (arr_0 [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((max(1, var_4)))))));
                    var_18 -= ((arr_3 [i_0] [i_0] [5]) ? ((32768 ? 3967287395 : (arr_5 [i_0 + 2] [i_0 - 1]))) : (min((min(1342071591, var_9)), (0 && 26154))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [i_0] = -895960640;
                    var_19 = (arr_12 [i_0 - 1] [i_0 - 2] [7]);
                    var_20 = (min((arr_11 [i_4] [i_3] [i_4]), (arr_4 [i_0 - 4] [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        arr_18 [i_5] = (arr_5 [i_5 - 3] [i_5 + 1]);
        var_21 = ((((((~(arr_1 [i_5] [i_5]))) ? (((~(arr_9 [i_5] [i_5])))) : ((~(arr_14 [i_5 - 3] [i_5])))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_22 = (65535 != 1);
                    arr_24 [i_6] = (arr_9 [i_5 - 3] [i_7]);

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_23 -= ((-631690400 * ((3235288859 & (((65535 ? 11768 : (arr_5 [i_7] [i_8]))))))));
                        var_24 *= (max(65535, (~1)));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        var_25 = ((~((var_2 ? 1 : 2437087463))));
                        arr_30 [i_6] [i_6] [i_7] [2] = (~var_4);
                        var_26 -= 1;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_35 [i_6] [i_6] = (60886 ? (arr_27 [i_5] [i_5] [i_6] [i_10] [i_5 - 1] [i_5 - 3]) : (arr_3 [i_7] [1] [i_7]));
                        var_27 -= (arr_32 [i_7] [i_6] [i_7] [i_7]);
                    }
                    arr_36 [i_7] [i_6] [i_5] = ((+(((arr_20 [i_6] [i_5 + 1] [i_5 - 2]) ? (arr_20 [i_5] [i_5 + 1] [i_5 + 2]) : (arr_20 [i_7] [i_5 + 1] [i_5 - 2])))));
                    arr_37 [i_5] [i_6] [1] [i_7] = ((((max(65534, (arr_8 [i_5] [i_5] [i_5] [i_5 + 2])))) ? (((min((arr_7 [10] [10] [i_7] [i_5]), (!3233867970))))) : (max((!0), var_10))));
                }
            }
        }
    }
    #pragma endscop
}
