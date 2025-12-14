/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 |= (~((1731346996 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))));
                var_16 = ((-var_3 ^ (max((arr_5 [i_0 + 2]), (arr_5 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 19;i_4 += 1)
                            {
                                var_17 = (((((max(var_9, var_10))) ? (((1731346996 * (arr_1 [i_4])))) : (var_4 / var_9))));
                                arr_14 [i_3 + 1] [i_0] [i_0] [1] [i_3] [i_3] [i_3 + 1] = ((134217727 ? ((-(!15640921787597166068))) : 17719));
                                var_18 = (!4028075186853015036);
                                var_19 = ((~(max(((-(arr_13 [i_4] [i_4]))), (arr_8 [i_0 + 2] [i_1] [i_3])))));
                            }
                            for (int i_5 = 3; i_5 < 19;i_5 += 1)
                            {
                                var_20 = min((arr_10 [i_5 - 2]), (arr_18 [i_0 - 3] [i_3] [i_0] [i_5 - 1] [i_5 + 2]));
                                var_21 *= (max((arr_12 [i_0 + 4] [i_3 - 1] [i_5 - 3]), (!62)));
                                var_22 *= ((min((((arr_12 [i_0] [i_1] [i_5]) <= (arr_0 [5]))), (!var_11))));
                            }
                            for (int i_6 = 2; i_6 < 19;i_6 += 1)
                            {
                                arr_21 [i_0] [i_0] [i_6] = ((((min((arr_5 [i_0 - 2]), 3006877451080339529))) && ((((var_6 & var_2) * (((!(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))))))));
                                arr_22 [i_0] = var_12;
                            }
                            arr_23 [i_0] [i_0] [i_2] [i_3 + 1] = (~var_2);
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_23 = (((arr_1 [i_1]) | (((var_0 ? (arr_8 [i_0 + 4] [i_1] [13]) : var_3)))));
                    var_24 = ((~(arr_13 [i_0] [i_0])));
                    arr_26 [i_0] [i_0] [i_0] = 1162561829;
                }
            }
        }
    }
    var_25 = (max(var_25, var_2));
    var_26 = (var_0 | var_9);
    var_27 = var_0;
    #pragma endscop
}
