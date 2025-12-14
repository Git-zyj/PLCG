/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-124 ^ var_14);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (arr_0 [i_0] [6]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (+(((arr_3 [i_0]) ? var_0 : ((-(arr_11 [4]))))));
                                var_20 = (arr_4 [i_0] [i_0] [i_2]);
                                arr_14 [i_0] = ((!(((((!(arr_10 [i_2] [i_1 - 1] [i_2] [i_3] [i_4] [i_0]))))))));
                                var_21 = ((!((((arr_0 [i_0] [i_1 - 1]) ? (arr_5 [i_1]) : (arr_8 [i_0] [i_3] [i_4]))))));
                                var_22 += ((~(((((arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1]) && var_0)) ? -var_7 : ((((arr_12 [i_0] [i_1] [i_1] [i_4] [i_3] [i_4]) ? var_1 : var_0)))))));
                            }
                        }
                    }
                    var_23 = (min(var_23, (((((arr_5 [18]) ? var_10 : (((min((arr_12 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0]), (arr_0 [i_1] [i_1])))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_24 ^= ((!(arr_8 [i_1] [10] [i_2 + 2])));
                                var_25 = ((~(arr_8 [i_0] [9] [i_5])));
                                var_26 &= ((((max((var_13 ^ 62293), (~var_14)))) ? (arr_8 [i_1] [i_0 - 1] [i_0 + 1]) : (((arr_16 [i_0] [i_1 - 2] [i_0] [i_5] [2] [i_1 - 2]) ? ((((arr_1 [18]) && (arr_2 [i_1])))) : (((var_10 >= (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_6]))))))));
                                var_27 = (((arr_5 [i_0 - 2]) ? 162 : -90));
                                var_28 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (max(var_14, var_2));
    #pragma endscop
}
