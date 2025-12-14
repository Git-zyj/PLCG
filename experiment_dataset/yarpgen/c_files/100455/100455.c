/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (arr_3 [i_0])));
                var_21 -= (((arr_1 [i_1] [i_0]) ? 2768168648988073568 : (((((var_15 ? (-9223372036854775807 - 1) : var_4))) ? (max(var_17, var_3)) : (((var_18 ? (arr_1 [i_0] [10]) : 501458453037985455)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = 0;
                            var_23 *= (((((((((arr_5 [i_0] [i_0] [i_0 - 1]) ? var_12 : var_0))) ? -1910321359 : (max((arr_3 [i_2]), (arr_5 [6] [i_2] [i_0])))))) && ((((arr_5 [i_0] [i_2] [i_2]) ? (arr_3 [i_0 + 3]) : -15)))));
                            arr_8 [i_3] = ((((((arr_0 [13] [i_1]) ? (arr_1 [i_0 + 2] [i_0 + 3]) : (arr_0 [i_1] [i_3])))) ? (~var_1) : ((min((!var_10), (var_17 <= var_4))))));
                            arr_9 [i_3] [i_2] [i_3] = var_0;
                        }
                    }
                }
                arr_10 [19] [i_1] = (arr_5 [14] [i_0 + 3] [i_0]);
                var_24 *= ((min((((arr_2 [i_0] [i_0] [i_0]) | -32761)), (((9223372036854775807 || (arr_5 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_25 -= (((((var_5 ^ (~-501458453037985456)))) ^ var_0));
    var_26 = ((var_10 != ((var_1 ? (~var_11) : var_11))));
    #pragma endscop
}
