/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_0);
    var_15 = 22;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, 22));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = ((((!18446744073709551593) - (max(var_3, -3090430641623850306)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((-13570 || (!var_13))))) * ((~(arr_8 [i_3]))))))));
                                var_19 *= (((((arr_4 [i_2 - 2] [i_2 - 1] [i_2 + 1]) ? (arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 1]) : var_13)) * (~13569)));
                            }
                        }
                    }
                    var_20 += (max((var_6 - var_3), 13560));
                }
            }
        }
        var_21 = (min(var_21, ((-(arr_8 [0])))));
        arr_12 [i_0] = var_11;
    }
    var_22 = (~8170944307498384428);
    #pragma endscop
}
