/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = ((~((-(arr_0 [i_2])))));
                    var_18 ^= (max(((((arr_2 [i_0]) ? var_12 : 2147483647))), (((arr_6 [i_0] [i_0] [i_1] [7]) ? (4294967295 + 20) : var_2))));
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_19 = ((0 ^ 22) ? ((((arr_13 [i_5] [i_5 - 2]) == (arr_8 [i_5 + 1] [i_3 + 1] [6] [11])))) : (max((arr_8 [i_5 - 2] [i_3 + 1] [i_3 + 1] [i_1]), -4)));
                                var_20 *= (max(var_13, (((arr_5 [i_3] [14]) ? (min(-28, var_5)) : (~253)))));
                                arr_16 [i_0] [i_0] [i_0] [2] [13] [i_5] = min(((4294967289 ? 338983284 : 4294967289)), ((-(arr_13 [i_1] [i_0]))));
                                arr_17 [i_0] [i_0] = (((((var_16 ? 54 : (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))) ? (((((arr_3 [i_3] [i_3]) << (var_2 - 26188))) * (0 & var_3))) : -4));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_3 - 1] [0] = 13331303289333682594;
                    var_21 = ((((-(arr_11 [i_3] [10] [i_3] [i_3 - 1] [i_3 + 1])))) ? (-127 - 1) : 65535);
                }
                var_22 = -18;
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
