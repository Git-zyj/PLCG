/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!-1) - -4294967295));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_21 *= ((0 ? (arr_8 [1] [i_3] [0] [i_1 - 1] [i_0]) : 1));
                            var_22 = (!(arr_4 [i_1] [i_2] [i_4]));
                        }
                    }
                }
            }
            var_23 = (arr_7 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2]);
            var_24 = ((1 ? var_3 : (arr_5 [i_0] [1] [12])));
        }
        var_25 += (!((((arr_5 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
    }
    var_26 = (min(var_6, ((var_5 ? ((3643522417581477023 ? 8877884013592305046 : var_16)) : (var_10 + 1)))));
    #pragma endscop
}
