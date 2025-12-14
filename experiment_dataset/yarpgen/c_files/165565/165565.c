/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] = 65;
                    var_11 = ((((((arr_0 [i_0]) << (~var_3)))) ? (((!(((var_6 >> (var_0 - 1970476682))))))) : 0));
                    var_12 *= 65535;
                    arr_7 [16] [i_1] [0] [i_0] = 2147483632;
                }
            }
        }
    }
    var_13 = max(var_1, var_5);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_14 = (max(var_14, (((1 ? ((max((arr_12 [i_3] [i_3] [i_3]), (arr_8 [i_4 + 1] [i_4 + 1])))) : (-66 / 418240573947344486))))));
                    var_15 = (arr_8 [3] [i_5]);
                    var_16 = ((~(arr_8 [i_3] [i_5])));
                    arr_14 [i_4] [i_4] = ((-var_3 ? ((max((arr_10 [i_3] [i_4 + 1]), var_0))) : (min(-53, -1145901413968121921))));
                }
            }
        }
    }
    var_17 = (((((var_1 ? var_8 : (13293050905534155290 | var_7)))) ? (((((~7961426682729300367) + 9223372036854775807)) << (4357 - 4357))) : ((((((var_4 ? var_5 : var_6))) ? (~var_4) : (53 | var_10))))));
    #pragma endscop
}
