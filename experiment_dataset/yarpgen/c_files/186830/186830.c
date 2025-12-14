/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((-48 ? 9223372036854775807 : 244))) && (((var_8 ? var_1 : 13115656336573712231))))));
    var_15 = ((!((max(((var_12 ? 16889678987130810022 : -17)), (min(var_8, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((((9203391017072147819 >> (478 - 468)))) ? (2097151 && var_1) : (((947705508511588369 >= ((max(17, 65534)))))))))));
                                var_17 = (max(2039987180, (min((~var_5), -1377240410))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max(var_8, -1)))));
                                var_19 = 130048;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_2] [i_7] [i_1] = (((~1) | ((1330064579 ? 13382040678835602646 : var_4))));
                                var_20 &= (((~-126) >= ((((!27492) ? ((var_11 ? var_8 : var_0)) : ((1 ? 10657 : var_0)))))));
                                var_21 = ((1557065086578741594 <= (((2822906957 ? -32761 : 0)))));
                            }
                        }
                    }
                    var_22 = -4158042396314851494;
                }
            }
        }
    }
    #pragma endscop
}
