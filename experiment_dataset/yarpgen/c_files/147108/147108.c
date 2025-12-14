/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 42706;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (((arr_2 [i_0] [i_0]) < (arr_2 [i_0] [i_0])));
        var_19 = (arr_0 [i_0 - 1] [i_0 + 2]);
        var_20 = (min((((((22809 ? 22809 : (arr_2 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 + 2] [i_0 + 1]))), (((((((arr_1 [i_0] [i_0]) ? 6766516593199798602 : (arr_3 [i_0])))) || (arr_0 [i_0 + 1] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = ((((min((arr_6 [i_1]), (arr_1 [i_1] [i_1])))) && (arr_6 [i_1])));
        var_22 -= ((!(((((min(var_13, (arr_0 [i_1] [i_1])))) ? (arr_3 [6]) : (~4107747704))))));
        var_23 = ((((((-(arr_4 [i_1])))) ? ((((arr_4 [1]) <= (arr_3 [i_1])))) : ((var_5 ? (arr_2 [i_1] [i_1]) : (arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_24 = ((((((3329252992 ? var_1 : (arr_14 [i_2] [i_3] [i_4] [i_4]))))) || (min((arr_16 [i_3] [i_3] [i_2] [i_3]), (arr_16 [i_3] [i_4] [i_3] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_25 = var_10;
                                var_26 -= (((arr_16 [i_4] [i_4] [i_4] [i_6]) ? (((~(arr_11 [i_2])))) : (min((!var_14), ((~(arr_20 [i_4])))))));
                                var_27 = (max(var_27, 9790043574150446985));
                            }
                        }
                    }
                }
            }
        }
        var_28 = ((22830 / -6) ^ (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - 211)));
        var_29 = (arr_14 [i_2] [i_2] [i_2] [i_2]);
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_30 = var_13;
        var_31 = (((arr_7 [i_7 + 1]) / 22814));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    {
                        var_32 = ((!((min((arr_10 [i_10 + 1]), (((arr_18 [i_7 + 1] [i_7] [i_8] [i_8] [i_7 + 1] [i_10]) ? 68 : 2720348603494192508)))))));
                        var_33 = (min((min(1, (arr_31 [i_7 - 1] [i_8] [i_9 - 1] [i_10]))), (arr_19 [i_7 - 1] [i_10 + 1] [i_10] [i_10 + 1] [i_7])));
                        var_34 = var_2;
                        var_35 -= ((((arr_27 [i_7 + 1]) < (((arr_10 [i_10]) % (arr_30 [i_7] [i_7] [i_8] [i_7]))))));
                    }
                }
            }
        }
        var_36 = (arr_29 [i_7]);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 19;i_13 += 1)
                {
                    {
                        var_37 = ((~((-(((!(arr_13 [i_7] [i_7] [7]))))))));
                        var_38 -= ((var_7 << (((22829 >= var_8) ? (arr_19 [i_12] [i_13] [i_13] [i_13 - 2] [i_12]) : -5451036827613946278))));
                    }
                }
            }
        }
    }
    var_39 = (min(var_13, (((58 && 18446744073709551615) ? (min(var_0, var_2)) : (2720348603494192501 != var_6)))));
    var_40 = var_2;
    #pragma endscop
}
