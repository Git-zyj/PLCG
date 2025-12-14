/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (-13 / var_8);
    var_11 = -2147483640;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = 60;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = (max(0, ((((((60 ? (arr_0 [i_1]) : -61))) ? (~var_9) : (((45819 ? 65535 : 1073741823))))))));
            var_13 = (min((((-60 || ((min(var_5, 6228748150988175786)))))), (max((max(-9223372036854775789, -58)), 1))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_14 = (1 < -1034544824);
                            var_15 = (arr_14 [i_5] [i_4 - 2] [i_4] [i_4] [i_4] [i_0]);
                        }

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_16 = 65;
                            arr_17 [i_0] [i_2] [i_3] [i_4] [i_6] = (min((((arr_14 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] [i_6]) ? -9223372036854775778 : (arr_14 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] [i_6]))), 1));
                            arr_18 [i_0] [i_2] [i_2] [i_3] [i_6] [i_6] [i_6] = 31394;
                            arr_19 [i_0] [i_2] [i_2] [i_3] [i_4] [i_6] [i_6] = ((arr_10 [i_6 - 1] [i_4] [i_4 + 1]) ? (max(58, (arr_8 [i_4 + 2] [i_4 - 1]))) : 21);
                        }
                        var_17 = ((81 ? ((max((!9223372036854775790), (arr_2 [i_4 + 1])))) : ((var_1 ? var_4 : 9223372036854775790))));
                        arr_20 [i_0] [i_2] [i_3] [i_3] [i_4] = 10441;
                        arr_21 [i_0] [i_2] [i_3] [i_4] = 65535;
                    }
                }
            }
            var_18 = 724290059;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_24 [i_7] = var_3;
        var_19 = 3570677237;
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 6;i_9 += 1)
            {
                {
                    arr_29 [i_8] [i_8] [i_8] = (2145206381524489043 | -51);
                    var_20 -= (arr_28 [i_7] [i_8] [i_8] [i_9]);
                }
            }
        }
        var_21 &= max(((max(-42, (arr_25 [i_7])))), (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]));
    }
    #pragma endscop
}
