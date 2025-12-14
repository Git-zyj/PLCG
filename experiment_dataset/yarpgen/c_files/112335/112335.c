/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_3 | 32764) ? ((max(157, 1))) : (~var_12))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 1] = (max((min(805306368, ((max((arr_5 [i_0] [i_0]), 15))))), ((((arr_5 [i_0] [i_0 - 3]) ? (arr_5 [i_0] [i_0 - 3]) : (arr_5 [i_0] [i_0 - 3]))))));
                    arr_8 [i_0] [i_0] [i_2] = ((max((arr_2 [i_0 - 3] [i_0 - 3]), (arr_5 [i_0] [i_0 - 2]))));
                    var_21 = ((var_3 ? 0 : (((arr_1 [i_0 - 2] [i_1]) / (arr_3 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 -= (max((min((arr_11 [i_1] [10] [i_0 - 1]), (((31914 + (arr_1 [i_0] [i_0])))))), ((max((arr_4 [i_0]), (max(163, var_18)))))));
                                arr_13 [i_0] [i_0 + 1] [1] [i_0] [i_0] [i_0] = (max((((var_11 ? 1 : (arr_5 [i_0] [i_0 + 1])))), (min(((max(-16, 15))), (max(-4, var_3))))));
                                var_23 = max(8191, 1);
                            }
                        }
                    }
                    var_24 *= ((((!(arr_3 [i_1]))) ? ((var_1 ? var_18 : (arr_3 [i_2]))) : ((((arr_3 [i_0 - 2]) ? (arr_3 [i_2]) : (arr_3 [i_0 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
