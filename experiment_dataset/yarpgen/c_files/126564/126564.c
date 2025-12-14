/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_0);
    var_20 = (max((((!(var_11 == -17735)))), (min((var_18 + var_1), var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [17] [i_3] = (max((((((var_5 ? (arr_10 [11] [3] [i_2 - 2] [7]) : var_8))) ? (!var_6) : var_13)), (((!(arr_0 [i_0 + 1] [i_0 + 2]))))));
                                var_21 = ((((var_12 <= ((-(arr_10 [14] [1] [14] [i_3])))))));
                                var_22 = (min(((((arr_1 [i_0 + 2]) >= (arr_7 [i_0] [i_2 + 2] [i_4])))), ((var_6 ? ((((var_5 != (arr_3 [i_1]))))) : 1))));
                                arr_15 [i_0 + 2] [i_0] [i_0] [i_3] [i_4] = ((((((arr_8 [i_0 + 2] [i_2 - 4] [i_3] [i_4 + 2]) * 127))) ? (1 * var_18) : var_1));
                            }
                        }
                    }
                    arr_16 [i_0] = 32139;
                    var_23 = ((((((var_4 <= (arr_13 [i_0] [5] [i_2 - 2] [i_0])))) | (arr_7 [i_0] [i_0] [i_0 + 2]))));
                }
                var_24 = (((!var_15) ? ((min((arr_9 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]), 0))) : (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                var_25 = (min(var_25, (((!(~1))))));
            }
        }
    }
    var_26 = ((-((var_17 + (!var_4)))));
    #pragma endscop
}
