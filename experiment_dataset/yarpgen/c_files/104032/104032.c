/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = ((((var_11 ? (arr_11 [i_1] [i_1] [i_0 - 1] [3]) : 13352174494867510551)) + (var_9 > 7209602504514162787)));
                                var_19 += (max((~2511590569970315099), ((10184407716116374081 ? ((-7209602504514162796 ? var_13 : 1738474587315027450)) : -86))));
                                var_20 = (max(-77, -var_15));
                                arr_14 [4] [1] [i_0] [i_2] [i_1] = (min(133955584, 18191902596523199105));
                            }
                        }
                    }
                    var_21 = (max((((~(var_13 & -49)))), (((((-9 ? var_10 : var_8))) ? var_12 : ((max(-525844971250675483, -8)))))));
                    arr_15 [i_0] [1] [6] [i_0] = (!((((arr_10 [i_2 + 2] [9] [i_0] [4] [i_2] [i_0 - 1]) ? (arr_10 [i_2 + 1] [1] [i_0] [5] [i_2] [i_0 + 1]) : var_10))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = (((-21874 ? (max(var_4, (arr_3 [i_0] [i_0])) : var_6))));
                }
            }
        }
    }
    var_22 = -17;
    #pragma endscop
}
