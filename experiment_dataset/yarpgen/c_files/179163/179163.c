/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_2] |= (((arr_12 [1] [i_0 + 1] [i_3 - 3] [i_3 + 1]) == ((((arr_12 [i_4] [i_2] [i_1] [i_0 - 2]) ? (arr_0 [i_1] [i_3 + 1]) : var_11)))));
                                var_17 = 11;
                                arr_14 [i_3] [i_3] [i_3 - 1] [i_2] [i_1] [i_0] [i_3] |= (((((!(arr_0 [i_3] [i_0 + 1])))) % ((var_12 ? var_15 : (arr_0 [i_4] [i_0 + 1])))));
                            }
                        }
                    }
                    var_18 += ((~((max((arr_10 [i_0] [i_0] [i_0 + 1] [i_1] [i_0] [i_0 - 2]), (arr_9 [i_0] [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 - 1] [i_0] [i_2] [i_5] [i_6] [i_6] [i_0] = (((arr_3 [i_0]) ? (var_7 * -var_9) : (~var_1)));
                                var_19 = ((((var_3 ? (arr_0 [i_0] [i_2]) : (arr_0 [i_0] [i_0]))) < (((arr_1 [i_0] [i_1]) ? (arr_17 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [13]) : var_3))));
                            }
                        }
                    }
                    var_20 = (max(-12, (max((arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_1]), (arr_16 [i_0 - 3] [i_1] [i_2])))));
                }
            }
        }
    }
    var_21 = (((min(15392437271935870344, -38)) >= (min(3054306801773681292, ((max(var_12, var_3)))))));
    #pragma endscop
}
