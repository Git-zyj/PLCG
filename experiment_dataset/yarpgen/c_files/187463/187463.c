/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (min((((min(183, 168)))), ((var_7 ? (min(var_10, var_13)) : ((var_9 ? var_0 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = 1;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 -= ((min((arr_5 [i_0 - 1] [4] [i_0 - 1]), (((!(arr_4 [14] [14])))))));
                            var_18 = (max((~10066), (((((arr_5 [i_0] [i_0] [i_0]) > (arr_7 [i_1]))) ? -1737820365 : (arr_10 [i_0] [i_1] [1] [i_3] [6] [1])))));
                            arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_2 + 1] [i_2] [i_1] = ((-((((arr_11 [i_3 - 3] [i_2 + 1] [i_0 - 1] [i_0]) != 194)))));
                        }
                    }
                }
                var_19 &= min((min(var_7, 183)), 186);
            }
        }
    }
    #pragma endscop
}
