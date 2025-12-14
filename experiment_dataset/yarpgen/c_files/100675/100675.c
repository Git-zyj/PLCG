/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(max(var_9, ((var_7 ? var_1 : var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, 127));
                    var_13 += ((((((arr_2 [i_0] [i_1 - 1]) ? 1 : (1 == var_6)))) ? -16 : 1));
                    var_14 = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_3] [i_2] [i_0] [i_0] = (!(((var_1 >> (var_5 + 33)))));
                                var_15 = (max(var_15, ((((arr_14 [i_3] [i_2 + 1] [i_2] [i_3] [i_3 + 1]) < var_1)))));
                                var_16 = (max(((((-27 ? 1 : 1)) % 114)), 1));
                                var_17 = (((arr_1 [i_0]) ? (((((-13 ? 119 : -91))) ? ((min(-16, 85))) : ((var_10 ? (arr_14 [i_0] [i_0] [i_3] [i_1 - 1] [i_3]) : (arr_14 [i_0] [i_1 - 1] [i_0] [i_3] [i_3]))))) : ((min((arr_8 [i_4] [i_3 + 1] [i_3 + 1] [i_2 + 2]), var_10)))));
                                var_18 = (max((max((var_6 | var_0), (arr_5 [i_1] [i_2] [i_2]))), ((var_2 ? ((var_3 ? var_0 : var_1)) : (!var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (-42 != -75);
    var_20 |= ((((((var_5 % var_8) == ((min(-22, -86)))))) & var_1));
    #pragma endscop
}
