/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 337792465));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (min((min(((((arr_7 [i_0] [i_0] [i_1 + 1] [i_0]) || (arr_4 [11] [i_1])))), ((-113 ? (-2147483647 - 1) : -9223372036854775807)))), ((min((arr_4 [i_0 + 2] [i_0 + 2]), -113)))));
                    var_15 = ((117 ? 9223372036854775807 : 3));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = ((((9223372036854775807 ? 338722398872053310 : -17425)) >= -17418));
                    var_17 = ((min(4294967295, -5900667647129857693)));
                }
            }
        }
    }
    #pragma endscop
}
