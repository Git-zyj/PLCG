/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 *= var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [13] = (min(-31939, (((arr_8 [i_2]) ? (arr_3 [i_0 + 1] [i_2 + 2]) : (arr_6 [i_0 - 2] [i_0 - 1] [11])))));
                    var_21 = (max(var_21, ((((-(arr_8 [i_1])))))));
                    arr_11 [1] [i_2] = ((((!(arr_1 [i_2 + 1]))) ? (arr_1 [i_2 + 1]) : ((max((arr_8 [i_2]), -659902327)))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_15 [1] [i_2] = (((!var_10) ? (((var_12 * (arr_13 [i_1] [i_1] [i_3 - 1])))) : 1688140040));
                        arr_16 [i_0] [i_2] [i_1] [17] [i_3 + 3] [5] = (((var_14 <= (arr_0 [i_3 - 1]))));
                    }
                    arr_17 [i_2] [22] [i_2] = (max(((min((arr_5 [i_2 + 2] [i_2 + 1] [i_0 - 1]), ((208 ? 2299 : 62))))), (((((arr_7 [23] [i_1] [i_2 - 1]) ^ 48)) | (((~(arr_0 [2]))))))));
                }
            }
        }
    }
    var_22 = var_3;
    var_23 *= var_7;
    #pragma endscop
}
