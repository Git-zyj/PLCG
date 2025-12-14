/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 689932249;
    var_17 = ((~((min(var_14, (var_3 || var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_18 -= (((arr_6 [i_0] [i_2] [i_3 - 3]) <= ((var_6 ? (arr_3 [i_0] [i_1]) : (arr_6 [i_1] [i_1] [i_2 - 2])))));
                            var_19 = (((arr_1 [i_3 + 2]) >= (arr_1 [i_3 + 1])));
                            arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] = (min(-53, 67));
                            arr_10 [i_0] = (((((arr_6 [i_2 - 3] [i_1] [i_3 + 1]) && var_8)) ? 17177772032 : (min((arr_1 [i_0]), (arr_7 [i_2 - 1] [i_1])))));
                        }
                    }
                }
                var_20 = (((11186 ? 4887 : ((((arr_1 [i_0]) && var_2))))));
                var_21 = 62;
                var_22 = min(((((arr_4 [i_0] [i_1]) < -1874485181778575966))), (max(var_10, (arr_2 [i_0] [i_0]))));
            }
        }
    }
    var_23 |= (((((min(var_4, 8)) * var_15)) >= (((((var_1 << (1831456058 - 1831456032))))))));
    var_24 = ((min(var_12, (max(var_9, var_13)))));
    #pragma endscop
}
