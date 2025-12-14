/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(var_15 || var_15))) || 216));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [15] [i_0] = (min((max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 - 1]))), 40));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = -3912402115233569473;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = ((var_15 == ((min(40, 7838)))));
                    var_21 = ((max((arr_10 [i_0 - 1] [i_0] [i_0 - 1]), var_9)));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_4] [i_4] [i_5 + 1] [i_6 - 3] = (min(((var_12 ^ (arr_17 [i_0]))), (((!(arr_11 [i_1]))))));
                                arr_19 [i_0] [i_0] = (((arr_10 [i_0] [i_0] [4]) ? ((((min((arr_6 [i_0]), 3574411019))) ? (arr_2 [i_0] [3]) : (((49 << (arr_1 [i_5])))))) : (arr_11 [i_4])));
                                arr_20 [i_0] = (arr_14 [i_5 + 1] [i_0 + 2] [i_0 + 2]);
                                arr_21 [i_5 - 2] [i_0] = (((((15360446999411021808 ? 5516960244670040432 : 137))) ? ((-(((arr_11 [i_4]) ? 49 : (arr_2 [i_6] [i_5]))))) : (arr_16 [i_0] [i_1] [i_4] [i_5 + 1] [9])));
                            }
                        }
                    }
                    arr_22 [i_0] [8] [i_4] [i_0] = var_18;
                    arr_23 [i_0] [i_0] [i_4] = ((var_0 * (arr_12 [i_0 + 3] [i_0 + 3] [i_4] [i_1])));
                    arr_24 [i_0] [i_1] [5] [i_4] = var_12;
                }
                arr_25 [i_0 + 3] [i_0 + 3] [i_0] = (((arr_16 [i_0] [i_1] [i_1] [i_1] [15]) ? (((-((var_13 - (arr_16 [i_1] [i_1] [4] [i_0] [i_0 + 3])))))) : ((var_18 ? 216 : (arr_14 [i_0 - 1] [14] [i_1])))));
                var_22 = (max(var_22, ((((arr_1 [i_0 + 1]) ? ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))) : (((arr_1 [i_0 + 3]) ? var_3 : (arr_1 [i_0 - 1]))))))));
                arr_26 [i_0] [i_0] = (max((~75), (40 % 32321)));
            }
        }
    }
    #pragma endscop
}
