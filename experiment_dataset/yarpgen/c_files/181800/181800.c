/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_11 [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1]) / (arr_11 [i_2] [9] [i_2 + 1] [i_2] [i_3])))) >= (((arr_9 [i_0] [i_0] [i_0] [i_0]) - ((((((arr_10 [8] [16] [i_2 + 3] [i_2]) + 2147483647)) << (((arr_5 [i_2 - 2]) - 103)))))))));
                                arr_15 [i_3] = 33741;
                                var_17 = (max(var_17, ((max((min(((max((arr_0 [i_0]), var_12))), ((~(arr_8 [i_0] [i_0] [i_4] [i_3]))))), (arr_10 [11] [i_2 + 2] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] = (9223372036854775797 - 29);
                arr_17 [i_0] = ((var_9 ? 62 : 6152176593134509106));
                var_18 = (max(((max((arr_7 [i_0] [i_1] [i_0] [i_0]), ((max(var_2, (arr_3 [i_0] [i_0]))))))), ((((((arr_9 [i_0] [i_0] [i_1] [18]) ? var_5 : var_0))) ^ (arr_6 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_19 = var_10;
    var_20 = (var_8 / var_11);
    #pragma endscop
}
