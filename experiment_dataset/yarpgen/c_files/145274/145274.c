/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = -27024;
                            var_12 = (min(-27024, (min((min(var_5, (arr_0 [i_0]))), var_10))));
                            var_13 = (max(var_1, (arr_7 [i_3 - 1] [i_3] [i_2] [i_2 - 1] [i_0] [i_0 - 1])));
                            var_14 += ((1 ? ((2057641937 ? ((-27024 ? var_9 : var_5)) : -2057641937)) : (((27023 ? -27031 : -27024)))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_15 = ((var_4 - (arr_8 [i_0 + 2] [i_0 - 2] [i_2 - 2] [i_3 - 1])));
                                var_16 &= (((~-3219270532336629275) | (((-17965 ? 13313 : (arr_0 [i_0 + 2]))))));
                                var_17 = (max(((-21237 ? (arr_13 [i_0] [i_3] [i_2] [i_3 - 1] [i_3 - 1]) : -2961148229)), ((min(var_6, -var_9)))));
                                var_18 = (((~((var_10 ? 0 : (-9223372036854775807 - 1))))));
                                var_19 = 13313;
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_20 = -17982;
                    var_21 = ((2057641937 ? 65535 : 2305842734335787008));
                }
            }
        }
    }
    var_22 = (max(var_22, var_1));
    #pragma endscop
}
