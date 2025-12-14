/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? (((((min(var_3, var_10))) ? (min(255, 3815835527)) : (((18446744073709551615 ? 84 : 51)))))) : var_7));
    var_12 = (max(((max((min(var_6, var_1)), var_1))), (min(var_10, ((var_3 ? var_10 : var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (min(55819, 5));
                                var_14 = (max(var_14, ((min(((var_4 ? 9223372036821221376 : (arr_6 [i_0] [i_2] [i_3 + 2] [i_4 - 2]))), ((min((arr_6 [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_4 + 1]), (arr_6 [i_2] [i_2] [i_3 + 2] [i_3 - 1])))))))));
                                arr_12 [i_0] [i_1 + 2] [i_2] = (min((min(((-74 ? 1 : 10)), (arr_8 [i_3 - 2] [i_2] [i_3 - 2] [i_2] [i_4] [i_4 - 1]))), ((var_5 ? var_4 : 9223372036854775807))));
                            }
                        }
                    }
                    var_15 *= min(1661157493, 0);
                }
            }
        }
    }
    var_16 = (min(4294967295, 4368));
    #pragma endscop
}
