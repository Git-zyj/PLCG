/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (max(((-5545 ? var_5 : (arr_0 [i_0]))), (((((31571 >> (var_8 - 9178))) & 304757916)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [10] [8] [i_2] [i_3 + 2] [i_2] = (min(((171 ? (arr_7 [i_2] [i_2 - 2] [10] [1]) : (arr_7 [i_2] [i_2 + 2] [i_2] [i_2 + 2]))), (min((arr_7 [i_2] [i_2 - 1] [i_2 + 2] [i_2]), (arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2])))));
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = (max(((175 - ((4 | (arr_4 [i_0] [i_1] [i_1]))))), ((((arr_3 [i_1 - 2] [i_2 - 3]) >= (arr_3 [i_1] [i_3 - 1]))))));
                                arr_14 [16] [i_1] [i_2 + 1] [16] [i_1] |= ((((((((var_4 ? var_1 : var_6))) ? (arr_2 [i_3 - 1]) : (23 | var_5)))) ? ((((arr_10 [i_4] [i_1 - 4] [i_4] [i_2 + 2] [16]) ? (arr_10 [i_3] [i_1 - 1] [i_2] [i_2 - 3] [4]) : (arr_10 [i_0] [i_1 + 1] [i_2] [i_2 + 2] [i_2 + 2])))) : ((~(max(-111, 54043195528445952))))));
                            }
                        }
                    }
                    var_18 = var_6;
                    var_19 = (min(var_19, (((((9863 > var_5) ? var_7 : ((9863 ? -130 : -9864))))))));
                }
            }
        }
    }
    var_20 = ((11564227153208310945 ? ((10 ? -9863 : ((-9223372036854775807 ? -9863 : -881696382)))) : 255));
    #pragma endscop
}
