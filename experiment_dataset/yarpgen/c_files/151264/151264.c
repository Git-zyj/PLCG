/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_2;
    var_12 *= (min((min((max(var_5, 949153670730879725)), (var_8 <= 293338048))), (!9223372036854775804)));
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (((((var_8 ? (min(var_6, -513550103)) : (min(var_7, (arr_8 [i_0])))))) ? (((((var_8 ? var_5 : (arr_4 [i_2] [i_1 - 1] [i_0])))) ? (max(var_4, (arr_6 [i_0] [i_0] [i_0]))) : (arr_8 [i_0]))) : ((max((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 *= var_8;
                                arr_16 [i_3] [9] [9] = (arr_4 [i_0] [i_0] [i_0]);
                                arr_17 [i_3] [i_3] = (10330 || 10305);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] = ((~(min(var_5, var_3))));
                }
            }
        }
    }
    #pragma endscop
}
