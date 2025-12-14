/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (~var_8);
    var_14 = var_4;
    var_15 = (min(var_3, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((((((var_5 ? 3 : var_2)))) ? (((~1830128292) | (((var_7 | (arr_1 [i_0])))))) : (arr_3 [8] [i_1 + 1])));
                var_17 -= var_2;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_18 *= ((var_11 ? (((min(var_4, 1)))) : (((!22750) ? ((min(-1609364202632843969, (arr_0 [i_1])))) : (arr_2 [i_0])))));
                    var_19 -= min(18446744073709551615, (-2147483647 - 1));
                }
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    var_20 &= (((arr_9 [i_3] [i_1 + 1] [i_0] [1]) ? (max(var_2, (arr_0 [i_1 + 1]))) : (((arr_4 [i_0]) & var_7))));
                    var_21 -= ((!((!(((arr_1 [i_0]) > var_4))))));
                }
                var_22 ^= var_10;
            }
        }
    }
    #pragma endscop
}
