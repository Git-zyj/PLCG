/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = ((var_3 + (arr_0 [i_0] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_17 += var_5;
                        var_18 = ((-45 / ((2779299337 >> (47 - 47)))));
                        arr_11 [i_0] [i_1] [i_0 - 1] [i_0] = (((arr_10 [i_1] [i_3] [i_2 - 1] [i_1]) / (arr_10 [i_1] [i_1] [i_2 + 3] [i_1])));
                    }
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_19 = var_6;
                        arr_15 [19] [i_1] [i_2] [i_4] = ((+((194 ? (arr_1 [i_0 - 1]) : ((-(arr_4 [11] [i_1])))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_20 = (arr_8 [17] [5] [16] [i_4] [i_5] [i_5]);
                            var_21 = (arr_7 [i_1] [1] [i_1] [i_5]);
                            var_22 = ((arr_0 [i_4 + 1] [i_5 - 1]) << (((arr_0 [i_4 + 1] [i_5 - 1]) - 349753969)));
                        }
                    }
                    var_23 = ((((max(var_9, 100))) ? ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])))) : ((54 ? 1907858881 : (arr_2 [i_0 - 1])))));
                }
            }
        }
    }
    var_24 = (min((((((0 ? var_4 : 112)) == ((var_9 ? var_4 : var_13))))), (((2779299338 != var_10) ? (!var_9) : var_8))));
    #pragma endscop
}
