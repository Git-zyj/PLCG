/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_7 > (var_3 / var_11)))) != var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] [i_0] &= (128 <= 0);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_1] [i_2] [7]) ? (arr_6 [i_0] [i_1] [i_3]) : (arr_8 [i_0] [i_0] [i_0])));
                        var_18 = (max(var_18, (((arr_5 [i_0] [i_1] [i_0]) == (arr_9 [9] [9] [i_3] [7])))));
                        var_19 += (arr_5 [i_0] [3] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_4] = var_0;
                        arr_17 [i_4] [i_1] [i_2] [i_2] = 127;
                    }
                    var_20 = ((((7836855074854217725 ? 124 : var_8)) >> (((arr_6 [i_2] [i_1] [i_0]) - 225))));
                    var_21 = (min(var_21, (((((((arr_2 [16] [i_1]) ? 203 : (arr_5 [i_0] [16] [i_2])))) ? var_16 : (arr_13 [i_2] [i_0]))))));
                }
            }
        }
        var_22 = (min(var_22, (arr_13 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = 10609888998855333890;
        arr_21 [i_5] = (((1 > 769115493013890542) ? ((((arr_3 [i_5] [i_5] [i_5]) ? var_11 : var_2))) : (arr_1 [i_5])));
        var_23 += (((var_15 << (var_6 - 19454))));
    }
    var_24 |= var_14;
    var_25 = ((7836855074854217725 ? var_6 : ((min(var_11, (max(var_4, 1)))))));
    #pragma endscop
}
