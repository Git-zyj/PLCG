/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((~var_7) ^ var_7))) ^ ((var_14 ^ (((max(var_11, var_7))))))));
    var_20 *= ((((281474976645120 ? ((102 >> (102 - 90))) : 48740)) + var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((((min((min(var_13, var_0)), (max((arr_0 [1] [i_1]), 1))))) ? -94 : (min(97, ((var_17 ? (arr_6 [5] [i_1] [i_2] [i_2]) : (arr_3 [i_1] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [21] [i_3 + 2] [i_4] = (arr_5 [i_3] [i_3] [i_3] [i_3 - 3]);
                                var_21 = (((min((arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_1 - 1] [i_1 + 1] [i_3 - 2]), (arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_3] [i_1 + 1] [i_1 + 1] [i_3 + 3]))) ? ((min((~48742), (-94 < 1)))) : var_12));
                            }
                        }
                    }
                    var_22 = (min((((2677564274 ? (!var_15) : ((102 ? var_11 : 9))))), ((((max((arr_3 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? ((21991 ? 25110 : var_12)) : -23764))));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_23 *= ((16797 >= ((var_6 ? (arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]) : 0))));
                        var_24 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_18 [i_5] [i_5] [i_5] = 17643;
                    }
                }
            }
        }
    }
    #pragma endscop
}
