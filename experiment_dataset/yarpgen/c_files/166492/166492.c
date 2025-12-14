/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] [11] = (1464041398 ? -508320983 : -1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = ((((((var_2 + 2147483647) << (var_9 - 61)))) ? ((var_13 + (-9223372036854775807 - 1))) : (~0)));
                        var_22 = ((-1701735735 <= (arr_9 [8] [i_2 + 1] [10] [i_2])));
                        arr_12 [10] [i_1] [1] [i_1] = (((var_5 ? (arr_4 [5] [7]) : (-127 - 1))));
                        arr_13 [1] = 1;
                    }

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_23 = var_15;
                        var_24 = (max(var_24, (((-(arr_6 [i_1]))))));
                    }
                    var_25 = 34;
                }
            }
        }
        var_26 = (max(var_26, 603342730));
    }
    var_27 = var_19;
    #pragma endscop
}
