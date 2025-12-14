/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 *= ((((max((arr_1 [i_0] [i_0]), var_6))) & (((~-891979744) | -26899))));
        var_11 = (max(var_11, (((((((arr_0 [i_0]) && (~55786)))) - (((var_0 > (!var_8)))))))));
        var_12 &= -26899;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (((((arr_3 [i_1]) ^ var_2)) / ((~(arr_4 [i_1] [i_1])))));
        arr_5 [i_1] = var_4;
        var_14 = var_5;
        var_15 = (arr_3 [i_1]);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (+(((var_7 - 26898) ? ((max(var_6, var_0))) : (((arr_4 [i_2 + 1] [i_2 + 1]) - (arr_8 [i_2] [i_2 + 1]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_16 &= (~(((arr_18 [i_2 - 1] [i_3] [i_5] [i_4] [i_4 - 1] [i_4 - 1]) + (((arr_15 [i_4] [i_5]) | var_8)))));
                        var_17 = (min(var_17, (((125 ? ((((((arr_6 [i_5]) ? 1202555328 : var_1)) >> (((arr_1 [i_3] [i_4 + 1]) - 8967))))) : (min((~-48883825), 2155824597)))))));
                        arr_20 [i_2] [i_3] [i_3] [i_4] [i_5] [i_4] = -652243704;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_32 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_8] = (((18912 | -70) ^ (max((arr_27 [i_2 - 1]), var_7))));
                            arr_33 [i_8] = (min((((arr_24 [i_6]) ? ((min(1599557987, -26919))) : 2155824597)), ((min((arr_4 [i_2] [i_6]), var_9)))));
                        }
                        arr_34 [i_2 + 1] [i_6] [i_8] [i_8] = (((((((2139142708 == (arr_29 [i_2 + 1] [i_8] [i_7] [i_8] [i_8])))) / 54)) | (((((arr_27 [i_6]) | (arr_17 [i_7])))))));

                        for (int i_10 = 2; i_10 < 7;i_10 += 1)
                        {
                            var_18 *= (min((min(var_9, 2275625826408069629)), ((min((arr_12 [i_2 + 1] [i_10 + 3]), (arr_12 [i_2 + 1] [i_10 - 2]))))));
                            arr_37 [i_8] [i_6] [i_8] = arr_8 [i_8] [i_6];
                            var_19 *= var_2;
                        }
                        var_20 = var_0;
                    }
                }
            }
        }
        var_21 = ((min(var_0, (((arr_25 [i_2 + 1]) & var_0)))));
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_22 = ((((((arr_4 [i_11] [i_11]) - (arr_4 [i_11] [i_11])))) ? (arr_4 [i_11] [i_11]) : (arr_4 [i_11] [i_11])));
        var_23 = (min((min((var_8 - var_7), (max(var_1, var_7)))), (((var_6 * (arr_3 [i_11]))))));
    }
    var_24 |= var_0;
    #pragma endscop
}
