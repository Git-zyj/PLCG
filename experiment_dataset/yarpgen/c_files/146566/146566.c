/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 += ((((((29645 - 46500) <= (!11169315804860869542)))) & (((29636 || (~1146318016425449862))))));
                                var_17 = ((((((~(arr_11 [1] [i_3] [i_2 - 1] [8] [i_0] [1]))) + 2147483647)) >> ((((-757633369 ? 10948 : 14088281261271265019)) - 10923))));
                                var_18 = (((((arr_7 [i_0] [i_2 - 1]) / (arr_3 [i_1] [i_2 - 2] [i_3 - 1]))) / (((min((arr_3 [0] [i_1] [i_0]), var_9)) / -var_11))));
                            }
                        }
                    }
                    arr_12 [i_0] [3] [3] [3] = (var_5 * ((min((var_9 >= var_8), (!var_13)))));
                }
            }
        }
    }
    var_19 = (((((max(var_11, var_5))) ? ((min(var_7, var_14))) : ((var_0 ? var_13 : var_9)))));
    var_20 *= var_11;
    #pragma endscop
}
