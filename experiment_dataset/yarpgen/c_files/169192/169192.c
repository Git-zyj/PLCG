/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (((!1) + -5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((((((arr_0 [i_0] [4]) + (arr_0 [i_0] [1])))) ? ((1 + (arr_0 [i_0] [i_0]))) : ((-(arr_1 [i_0] [i_0])))));
        var_16 -= ((((-30545 < (arr_0 [i_0] [i_0])))));
        arr_2 [13] = (arr_1 [i_0] [i_0]);
        var_17 = -var_5;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                var_18 = (((((((~(arr_5 [7] [i_2] [i_2]))) >= (!41516)))) << ((((max((!1), (max((arr_0 [i_1] [i_2]), (arr_0 [i_2] [19])))))) - 39624))));

                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_19 = ((((((arr_9 [i_3 + 1] [i_3]) ? ((var_9 ? (arr_1 [i_1] [i_1]) : 1123919764)) : (((3171047531 ? (arr_4 [12]) : 1692)))))) ? 4294967295 : ((((min(7265, (arr_13 [i_3] [i_2]))))))));
                        var_20 = ((~((var_8 ? 21036 : ((1115954296 ? 2204669861 : (arr_13 [i_3] [i_2])))))));
                        var_21 = (min(var_21, (((((((((~(arr_1 [9] [9])))) ? -1860389651 : (var_1 && 1)))) ? var_6 : ((-(7258434241655324045 - 4029564647809745123))))))));
                        arr_14 [i_3] [i_2] [i_3 - 3] [i_4] = 61662;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_22 = ((((((arr_10 [i_3]) ? ((1266254726 ? 22537 : (arr_6 [1] [1]))) : (arr_3 [i_5])))) ? (arr_13 [i_3] [i_5]) : ((-(511 ^ var_7)))));
                        arr_18 [9] [i_3] [i_1] [i_2] [2] [i_5] = ((-(min(1000575238, (min(-82, 1073725440))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_23 = -var_8;
                        var_24 = ((((-(max(1700849305, var_8)))) == (((~((89 | (arr_0 [i_2] [i_3]))))))));
                    }
                    arr_21 [i_1] [i_3] [i_3] = ((((max(11, (arr_20 [i_3] [1] [i_3] [i_3]))))) ? (arr_5 [i_3 - 1] [i_3 - 2] [3]) : (22743 - var_12));
                    arr_22 [i_3] [i_3] = ((((min(11151297243807657835, 0))) ? var_6 : (max(110, ((82 ? 1 : 3781111198144073686))))));
                }
                var_25 = (min(1, ((!((min(var_5, 37306)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_26 = (max(var_26, 107));
                    arr_31 [i_9] = (1 > 64891);
                    var_27 = ((!((min(-27, (max((arr_13 [i_9] [i_8]), 106)))))));
                }
            }
        }
    }
    #pragma endscop
}
