/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_9 ? ((min(117, 137))) : (var_9 != 119)))), ((~((var_0 ? var_7 : 598452049))))));
    var_14 |= (!1023);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 |= arr_5 [i_1];
                arr_6 [i_0] [i_1] = (137 + 111);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 |= ((+((((min((arr_10 [i_0] [i_0]), 137))) ? var_2 : (max(281297304, 136))))));
                            var_17 -= 65535;
                            var_18 = (((((var_4 + (-9223372036854775807 - 1)))) ? 8164910537774764137 : (((min(136, (arr_5 [i_1])))))));
                            var_19 = (max(9223372036854775807, 29366));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
