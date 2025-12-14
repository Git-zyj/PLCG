/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = 8177925853906379348;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = ((1 ? ((var_0 ? (arr_0 [i_0] [i_4]) : (arr_7 [i_0]))) : ((min(((((arr_7 [12]) && (arr_4 [i_0])))), (arr_8 [4] [i_3 - 1] [i_1 - 1] [4] [i_1 - 1]))))));
                                var_21 = ((18446744073709551604 ? ((18446744073709551595 ? (arr_2 [8] [i_1]) : var_9)) : (((arr_9 [i_2] [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 1]) ? (((arr_1 [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]) : var_4)) : (arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_3 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((-116 ? var_8 : 18446744073709551608));
    #pragma endscop
}
