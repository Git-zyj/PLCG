/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_2] = (((-7816472094463290234 ? 1 : 1)));
                    var_13 *= (min(var_12, (arr_2 [i_0] [1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [1] [i_1] [5] [5] [i_0] = (min((((min(var_10, var_10)) | (((max(1, 1)))))), ((min((arr_8 [i_3 + 1] [i_3 + 1] [i_0] [i_1 + 1]), (arr_8 [i_3 + 1] [i_2] [i_0] [i_3 + 1]))))));
                                arr_12 [i_0] = -5266102454334841493;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = -var_9;
    #pragma endscop
}
