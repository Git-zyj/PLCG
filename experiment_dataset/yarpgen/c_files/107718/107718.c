/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= max((min(var_1, (~var_1))), var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = ((((((arr_7 [i_0] [i_3]) ^ var_7))) ? (var_4 ^ var_4) : (arr_7 [i_3] [i_1])));

                            for (int i_4 = 1; i_4 < 20;i_4 += 1)
                            {
                                var_12 = arr_0 [i_0];
                                var_13 = (arr_6 [i_4 - 1] [i_4 - 1]);
                                var_14 = (max(var_14, ((((((102536088 ? 4005202856 : (((min((arr_5 [i_0] [i_1] [i_1] [i_4]), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])))))))) ? (((!(((var_6 ? (arr_3 [i_4] [i_1] [i_1]) : var_6)))))) : (((4005202856 >= 106) - (var_3 / var_9))))))));
                            }
                        }
                    }
                }
                var_15 = (max(var_15, (0 != 255)));
                var_16 *= ((-(((arr_0 [i_1]) & (var_7 & var_7)))));
            }
        }
    }
    #pragma endscop
}
