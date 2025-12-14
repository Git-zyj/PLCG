/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((576460750155939840 ? (max(10923281425536060161, 576460750155939840)) : 10923281425536060161));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = max(var_8, (-7523462648173491450 == 172));
        arr_2 [9] = 17818062825083648343;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_20 -= (((min((!7523462648173491450), (arr_4 [i_1])))) ? ((((!(var_1 % var_14))))) : 15088681700066353081);
        var_21 = (225 % var_7);
        arr_6 [i_1] = (((((((arr_5 [i_1] [i_1]) >> (((arr_5 [i_1] [i_1]) - 58))))) % 10923281425536060165)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_7 [i_2]);
        arr_10 [i_2] = ((36 ? var_12 : 23594));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_22 = (~var_9);
                    var_23 = ((17870283323553611747 ? var_1 : 13796));
                    var_24 = ((-((127 >> (var_8 - 162)))));
                }
            }
        }

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_25 -= ((-(var_8 >> 30)));
            arr_19 [i_5] = 14324640916158138852;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_26 = (max(var_26, (((6 ? (var_8 ^ var_15) : (((974910263072899223 == (arr_8 [i_6] [i_6])))))))));
        var_27 = (arr_1 [9]);
        var_28 = (((arr_15 [i_6]) == 628681248625903273));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_29 -= (17471833810636652393 ? var_14 : (arr_23 [i_8]));
                    var_30 = (min(var_30, (((-(!var_10))))));

                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_31 = arr_30 [i_6] [i_7];
                            var_32 = (arr_29 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10]);
                        }
                        arr_34 [i_6] [8] [i_8] [i_9] &= (var_3 >> (!25089));
                    }
                }
            }
        }
        var_33 = (max(var_33, (arr_0 [i_6])));
    }
    var_34 = var_6;
    var_35 = var_13;
    var_36 = ((((((max(36, var_8))) ^ var_15)) == (max(((-14768 ? 81 : var_14)), (10923281425536060150 == 29193)))));
    #pragma endscop
}
