/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (0 <= 150);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_16 *= ((var_0 ? (max(var_10, (arr_5 [i_1 - 1] [0]))) : (0 && var_3)));
                    var_17 = (arr_0 [i_1 - 1]);
                    arr_8 [i_1] [i_1] [i_2] = (((arr_1 [i_1 - 1]) << (((65535 <= (arr_1 [i_1 - 1]))))));
                }
                var_18 = (arr_6 [i_0] [i_1] [i_1] [3]);

                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] = (((((var_14 + (var_9 | 11067094424224238978)))) ? ((min(var_3, var_2))) : -var_3));
                    var_19 = ((((((arr_6 [i_1 - 1] [i_1] [i_3] [i_3 - 2]) >> (var_2 + 127)))) || ((max((arr_6 [i_1 - 1] [i_1] [i_1 - 1] [i_3 + 1]), (arr_6 [i_1 - 1] [i_1] [i_3] [i_3 - 2]))))));
                }
            }
        }
    }
    var_20 += (!144115188075855871);
    #pragma endscop
}
