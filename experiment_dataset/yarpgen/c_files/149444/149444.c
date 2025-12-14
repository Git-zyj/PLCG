/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 ^= 38614;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_18 = (arr_0 [1]);
                    var_19 = (min(((max((arr_1 [i_1 - 1]), var_6))), (1933237400 + -2361729887)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (max((((!(((1933237370 ? 115 : 5126217436525962014)))))), (((arr_6 [i_1]) ? (arr_6 [5]) : (arr_6 [i_2])))));
                        var_21 = var_13;
                        var_22 = (min(var_22, var_7));
                    }
                }
                arr_9 [i_0] [i_1] = ((!(arr_2 [i_1 + 1] [i_1 - 1])));
                arr_10 [i_0] [i_0] [i_1] = 61;
            }
        }
    }
    var_23 *= ((((((var_12 + var_0) ? var_13 : (var_0 - 1933237370)))) ? var_5 : var_9));
    #pragma endscop
}
