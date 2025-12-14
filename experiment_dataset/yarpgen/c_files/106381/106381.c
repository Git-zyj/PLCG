/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((2536767159 == -741411830) != (~610305378775502467)));
        arr_4 [i_0] [i_0] = 61876;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 = (arr_13 [i_1] [i_2] [i_2] [i_1]);
                                arr_21 [i_1] [i_2] [i_3 + 1] [i_4] [i_2] [0] = ((-3921354372 ? (((373612917 - (arr_16 [i_1] [i_2 + 1] [i_2])))) : var_0));
                                arr_22 [i_2] [i_2] [i_2] [10] [i_2 - 1] = (((((-1 <= (((0 != (arr_12 [i_2 + 3] [i_2]))))))) >> (((18446744073709551606 == 218) >> 0))));
                            }
                        }
                    }
                    arr_23 [i_1] [i_1] [i_2] = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_30 [i_2] = ((-1467912480 ^ ((-15 - (((!(arr_25 [i_6]))))))));
                                var_15 = ((((min(373612952, (arr_26 [i_1] [i_2] [i_1] [i_2] [i_7])))) ? -95 : (arr_2 [i_6 + 2])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_41 [i_1] [i_1] [8] [i_9] [i_1] = (((((min(var_6, (arr_18 [i_9]))) > -104))) % ((~((var_7 ? var_3 : var_9)))));
                                var_16 = ((((arr_40 [i_10 + 1] [i_9] [i_9] [i_9 + 1]) ? 2536767159 : (arr_40 [i_10 + 1] [i_9] [i_9 + 1] [i_9 + 1]))));
                                var_17 *= -22;
                            }
                        }
                    }
                    arr_42 [i_1] [i_8] [i_9 + 1] [i_9] = 9937976862558926216;
                }
            }
        }
        var_18 = ((-((-((((arr_9 [i_1] [i_1] [i_1]) || (arr_38 [i_1] [i_1]))))))));
        arr_43 [i_1] = (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_19 = 0;
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        var_20 = 1;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    var_21 = (!14211);
                    var_22 = max(((-((max(1, var_8))))), var_5);
                }
            }
        }
    }
    for (int i_15 = 4; i_15 < 11;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                {
                    arr_66 [i_17] = (~(~1));
                    var_23 = ((((arr_60 [i_15 - 4] [i_16]) * (arr_60 [i_15 - 4] [i_17]))));
                }
            }
        }
        arr_67 [i_15] |= (((((((0 ? (arr_57 [i_15 + 3]) : 1581232456422335424))) || var_12)) ? (18446744073709551607 >= 61876) : (~65354)));
    }
    var_24 = 3041654163775884402;
    var_25 = 1;
    var_26 = (!1);
    #pragma endscop
}
