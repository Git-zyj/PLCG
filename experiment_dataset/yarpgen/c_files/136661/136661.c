/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((~6220) + 2147483647)) >> (202 == 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (42539 << 1)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = ((6588749411117423725 >> (228 - 217)));
                                var_13 = (((arr_12 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0]) < ((3055509423 + ((((1 >= (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [1])))))))));
                                arr_17 [1] [1] [1] [i_3] [i_1] [i_1] = 1;
                                var_14 = (max(var_14, (((min((var_7 >= var_1), (arr_15 [i_1 - 3] [i_4])))))));
                            }
                        }
                    }
                }
                var_15 = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            {
                var_16 = (min(var_16, (~1)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((min((((min(1, 1)) ? (1 < var_0) : (-127 - 1))), ((((arr_14 [i_5] [20] [i_5 - 1] [i_5] [i_5 - 1] [i_7]) && (arr_12 [6] [i_6] [i_7] [19] [i_6] [i_6])))))))));
                            var_18 = ((~(((((1 ? 65535 : -29))) ? (1 == 741431470) : (arr_2 [i_5 - 1])))));
                            arr_29 [i_6] [i_6] = (--32767);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
