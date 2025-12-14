/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_14 ? 121 : var_11)) | ((-124 ? var_10 : var_11))))) ? var_2 : ((((min(var_10, var_4))) ? var_11 : ((var_10 ? var_7 : var_5))))));
    var_16 = (max(var_16, (((3 ? (-121 % var_13) : ((((max(-69, 27))) ? var_14 : ((var_6 ? var_2 : var_9)))))))));
    var_17 = (min(var_17, ((((((var_5 ? var_14 : (12 >> 15)))) ? ((var_1 ? ((126 >> (-29 + 38))) : -113)) : ((120 ? -64 : (var_12 == var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((((((((arr_0 [i_0]) ? (arr_2 [i_0]) : -50))) ? ((max(-15, 29))) : (arr_2 [i_0 + 1])))) ? (((arr_2 [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_1] [i_0 - 1]) : ((min(27, (arr_0 [i_0])))))) : ((min(-12, -7))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (max((arr_0 [i_0]), (arr_0 [i_3])))));
                            arr_11 [i_0] = (max((((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]) ? (arr_0 [i_0 - 1]) : (arr_3 [i_0] [i_0] [i_2]))))), ((((((-13 + 2147483647) << (((((arr_6 [i_0] [i_1] [i_2] [i_2]) + 128)) - 3))))) ? ((120 ? (arr_2 [i_1]) : 89)) : (((arr_4 [i_0] [i_0] [i_0] [i_3]) ? (arr_2 [i_0]) : (arr_0 [i_0])))))));
                            var_20 += (((((arr_4 [i_0] [i_2] [i_2] [i_2]) >= (arr_2 [i_3]))) ? (((arr_5 [i_3] [i_3]) - (arr_2 [i_0 - 1]))) : (arr_3 [i_0 - 1] [i_3] [i_3])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 = ((((((((arr_1 [i_0]) ? -70 : (arr_5 [i_0] [i_0])))) ? (((arr_15 [i_0]) >> (50 - 42))) : ((-78 | (arr_8 [i_0] [i_0] [i_4] [i_5] [i_0] [i_1]))))) | ((-36 ? -29 : 17))));
                            var_22 = (max(var_22, (arr_16 [i_0] [i_1] [i_0] [i_0])));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(97, 3);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
