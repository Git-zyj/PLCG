/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] = max((max(26365, 575812051)), (((-31243 == (((arr_1 [i_0]) ? (arr_2 [i_2] [i_1]) : 2882611582552237484))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_12 = (((~((var_4 ? var_2 : -1197)))));
                        var_13 = (~763203635);
                        arr_10 [i_3] [i_0] [i_0] [15] = (((min((arr_2 [i_0 - 1] [i_0]), (arr_0 [i_0 - 1] [i_0 + 1]))) ^ (((arr_0 [i_0 - 1] [i_0]) & (arr_0 [i_0 - 1] [i_0 - 1])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_14 = (max((min(1024, 1889159385)), 2461));
                        var_15 = ((-6806 ? 25641 : 3263034249));
                        arr_13 [i_2] |= (max((max(-16, 26362)), 13801));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((((18043 * 26376) ? (arr_1 [i_2]) : (arr_5 [i_1] [i_6] [i_2])))) ? (arr_18 [i_2] [i_2] [i_0 - 1] [i_5 + 2] [i_6] [i_6] [i_5 + 2]) : (min((arr_4 [i_2] [i_1] [i_2] [i_1]), (min(var_10, 7441904119260706184)))))))));
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = (arr_14 [i_0]);
                            }
                        }
                    }
                }
                var_17 *= 1765125425;
            }
        }
    }
    var_18 = (min(((~((3188275681 ? var_2 : var_6)))), var_5));
    #pragma endscop
}
