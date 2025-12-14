/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(var_4, 1)) / -var_2)) / var_11));
    var_17 = (202 >> 0);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [1] [i_2] [i_3] = min((((arr_2 [i_1 + 3] [i_0 - 3] [i_0 - 1]) / (max(14563930624777257201, var_12)))), (((((min(var_15, 195))) ? 9223372036854775801 : (min(var_11, 68))))));
                            arr_12 [i_0 - 4] [10] [i_1] [1] [i_0 - 2] = ((max(-8082896474739481173, 122)) << (min(var_8, (arr_2 [i_1 + 2] [i_1 - 1] [i_0 - 4]))));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_17 [i_3] [i_1] [i_3] = (min((-5833311866410143112 & 0), ((~(58 & 9223372036854775807)))));
                                var_18 = (max(var_18, ((max((min(10, (((arr_0 [i_4]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_1] [i_0 - 2] [i_4]))))), ((max((arr_7 [17] [i_0] [i_1] [i_0]), (arr_1 [i_1])))))))));
                            }
                            arr_18 [i_1] [i_1] = ((~var_15) <= (max((arr_0 [i_1 + 2]), var_2)));
                        }
                    }
                }
                var_19 = (min(((((arr_1 [i_0 - 4]) < (arr_9 [i_0 - 2] [5] [i_0 - 3] [i_1 + 2] [i_1 - 1] [i_1 - 1])))), ((var_13 ? 1 : (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
