/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = 4294967287;
                    arr_7 [i_0] = -31237;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 += (((arr_6 [i_3 + 1]) > (~12)));
                                var_13 = ((~(arr_11 [i_0] [i_0] [i_3 + 1])));
                                var_14 = (max(var_14, (min((max(((min(var_2, 34303))), ((12437406093380807253 ? var_0 : 14)))), var_0))));
                                var_15 = ((346223445 ? 31237 : 32767));
                            }
                        }
                    }
                    var_16 = (max(var_16, (((!((max((arr_0 [i_1]), ((var_6 ? -24614 : var_0))))))))));
                    var_17 = (max(var_17, (((((((((30546 ? (arr_0 [i_0]) : var_2))) ? var_4 : (((var_8 ? 11499 : 32767)))))) ? 32756 : 18)))));
                }
            }
        }
        var_18 = ((((((var_10 + (arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? -var_0 : ((var_10 ? 346223469 : (arr_4 [i_0] [i_0])))));
    }
    var_19 = -8;
    #pragma endscop
}
