/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = 1;
    var_19 = (var_15 > var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (min((arr_1 [i_1] [i_0]), var_7));
                var_21 = 1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] = ((~((1 ? (arr_6 [i_1] [16] [i_1]) : ((min(11, 1)))))));
                                arr_12 [i_0] [i_0] [i_2] [10] [i_1] = (((min(var_10, var_12))) ? ((~(arr_5 [i_0] [22] [i_1]))) : (((arr_10 [i_4 + 2]) ? var_13 : (arr_5 [i_1] [i_2] [i_1]))));
                                var_22 *= ((min((arr_4 [i_3]), (arr_4 [i_0]))));
                                arr_13 [i_0] [i_1] [i_1] [i_3 - 1] [i_1] = (((var_10 ? (3 || 15101092870691424059) : var_0)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
