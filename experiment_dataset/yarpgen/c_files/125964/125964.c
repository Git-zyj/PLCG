/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_1] = (arr_3 [i_0]);
                    arr_12 [i_1] = ((((((arr_9 [i_0] [i_1] [9]) || -8109857868900257085))) % (arr_4 [i_0] [9] [i_2])));
                    var_11 = (min(var_11, (((~((43879 ? (arr_0 [i_2] [i_0]) : var_10)))))));
                    var_12 = (((((57 >> (57 - 43)))) ? (!-57) : (max(var_7, var_2))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_13 = ((((!-61) * ((var_0 ? 999105959 : (arr_15 [i_3] [8]))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_24 [7] [i_3] [10] [i_5] [i_6] [i_4] = (min(((min((var_4 >> var_5), (arr_15 [i_5 + 2] [i_5 - 2])))), (max((arr_20 [i_4]), ((min(var_7, 1)))))));
                                var_14 = (max(var_14, (((0 >> (172 - 157))))));
                                var_15 = (i_4 % 2 == 0) ? (((+((-58 ? (((14 << (((arr_22 [i_3] [13] [i_4] [i_5] [13] [i_7 - 1]) + 64))))) : (arr_23 [i_6] [i_6] [i_6] [i_6] [i_6])))))) : (((+((-58 ? (((14 << (((((arr_22 [i_3] [13] [i_4] [i_5] [13] [i_7 - 1]) + 64)) - 157))))) : (arr_23 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                            }
                        }
                    }
                }
                var_16 |= -57;
                arr_25 [i_4 + 2] [i_4] [i_3] = 1903949342;
            }
        }
    }
    var_17 = ((!((min(60, -61)))));
    var_18 = var_10;
    #pragma endscop
}
