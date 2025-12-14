/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((-(!var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (arr_6 [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 = (((((arr_5 [i_3 + 3] [i_0] [i_3 - 2]) && (arr_5 [i_3 - 2] [i_0] [i_3 - 4]))) ? (((min((arr_8 [i_0 + 2] [i_0 + 2] [i_0] [i_3 - 4]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_3 + 2]))))) : (arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_3 - 2])));
                                var_23 = (min(var_23, (((!(((((!(arr_1 [i_4])))))))))));
                                arr_11 [i_3 - 3] [i_3] [8] [i_0] [i_3 - 3] [6] [i_3 - 2] = (min((arr_6 [10] [10] [10]), ((~(arr_5 [i_0] [i_0] [i_4])))));
                                arr_12 [i_0] [i_0] = ((!((max((arr_10 [i_1] [i_1 + 2] [i_1 + 2] [i_3] [15]), (arr_7 [i_1] [i_1] [i_1 + 1] [i_1]))))));
                                var_24 = (min((arr_10 [i_4] [i_3 + 3] [14] [i_1] [0]), ((max((((arr_10 [i_0] [i_1] [i_2] [i_0] [i_4]) && (arr_8 [i_0] [11] [i_0] [5]))), (!3311950727))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0] = ((arr_3 [i_0] [i_0 - 1] [i_0 + 2]) ? ((((arr_3 [i_0] [i_0 - 1] [i_0 + 2]) ? (arr_3 [i_0] [i_0 - 1] [i_0 + 2]) : (arr_3 [i_0] [i_0 - 1] [i_0 + 2])))) : (arr_3 [i_0] [i_0 - 1] [i_0 + 2]));
                }
            }
        }
    }
    var_25 = var_14;
    #pragma endscop
}
