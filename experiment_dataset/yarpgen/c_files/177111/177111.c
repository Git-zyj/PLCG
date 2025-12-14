/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((var_17 ? var_9 : var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (min(var_13, (var_11 > var_6)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 -= ((((((161 ? 9223372036854775807 : (-9223372036854775807 - 1)))) ? (arr_11 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_4] [i_4 - 2]) : (max(-2147483633, -134217728)))));
                                var_21 = ((!((max(((min(var_11, var_16))), 9223372036854775807)))));
                                var_22 = (max(((var_10 ? 157 : (arr_13 [i_4 + 1] [i_4 + 1] [i_4] [i_3 + 2] [i_3 + 3] [1]))), (((max(10068674467733436911, 1632239204))))));
                            }
                        }
                    }
                    var_23 = (((((max((arr_3 [i_1]), 960))) ? ((-9223372036854775807 | (arr_0 [i_1]))) : (((min(31, var_14)))))));
                    var_24 |= (~1528939118293313198);
                }
            }
        }
    }
    var_25 = -46;
    var_26 = (min(var_11, (((-32035 + 2293806961423243363) ? var_4 : 2277475632))));
    #pragma endscop
}
