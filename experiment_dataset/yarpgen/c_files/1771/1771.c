/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_4 - var_0), ((((min(var_1, 3873993752268688211))) ? var_7 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] = (arr_3 [i_1] [15]);

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_0] = var_12;
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4 + 3] = ((((max(((3873993752268688211 ? var_1 : (arr_11 [i_4] [i_0] [i_0] [6]))), var_12))) ? (~24559) : (((arr_11 [i_4 - 2] [i_0] [i_0] [i_0]) & ((110 ? var_5 : -24570))))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                arr_20 [i_0] [6] [i_0] [i_0] [12] = ((-(max((((-(arr_1 [i_0])))), ((-10688 ? 18446744073709551615 : (arr_5 [i_0] [i_0])))))));
                                arr_21 [i_0] = 1569198198;
                                arr_22 [i_0] [18] [i_3] [i_3] [i_5] = (min((((arr_18 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3 - 1]) ? 24557 : 0)), (arr_7 [i_0] [i_1] [i_2])));
                                arr_23 [6] [i_2] [i_0] [i_3] [i_5] = (((min((arr_3 [i_3 + 2] [i_1]), (arr_3 [i_3 + 2] [i_1])))) ? (max((arr_3 [i_3 - 1] [i_1]), (arr_3 [i_3 - 1] [0]))) : (((arr_3 [i_3 - 1] [i_1]) ? (arr_3 [i_3 - 2] [11]) : (arr_3 [i_3 - 2] [i_1]))));
                            }
                        }
                    }
                }
                arr_24 [i_0] = arr_1 [i_0];
                arr_25 [i_0] = ((242 % ((~(arr_2 [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
