/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((min((((var_0 ? var_0 : 0))), var_13)) <= ((((~1) ? var_9 : 1))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = 514310502;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((3829616330393872635 <= var_0) == var_2))));
                                var_18 = (max(var_18, ((((arr_0 [i_4 - 2]) ? (~var_13) : -0)))));
                                var_19 *= (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : 13802));
                                var_20 = ((((((arr_0 [16]) ? 130 : (arr_11 [i_4])))) && 35));
                                var_21 = ((((arr_4 [19] [1] [1]) ? 5045809048255048666 : 6834)) & (arr_4 [i_0 - 1] [i_3 + 1] [i_3 + 1]));
                            }
                        }
                    }
                    var_22 *= ((var_5 ? var_3 : (17635 | -5)));
                    var_23 = (max(var_23, (((~(arr_8 [i_0] [i_0] [i_0] [i_1] [i_0 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
