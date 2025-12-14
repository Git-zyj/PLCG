/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 107;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = -23891;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((~(arr_0 [i_3] [i_1])));
                                var_20 = var_5;
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [10] [i_0] = ((-58248 ? (min(0, (arr_3 [i_4 + 1] [i_3]))) : (((arr_3 [i_4 + 1] [i_1]) % (arr_3 [i_4 - 1] [i_4 + 1])))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4 - 1] = (max((((arr_3 [i_0] [i_0]) + var_14)), (((var_7 ? (arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_1]) : 107)))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((((44829 ? ((107 ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_1]))) : 466315911)) % (((~(arr_2 [i_0] [i_1] [i_0])))))))));
                }
            }
        }
    }
    #pragma endscop
}
