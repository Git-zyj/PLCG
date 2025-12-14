/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    var_17 = (max((~142), (max((max((arr_4 [i_2]), 32767)), (arr_5 [i_0] [i_2 - 3])))));
                    var_18 ^= ((!(((max(18446744073709551614, 0))))));
                }
                arr_10 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
            }
        }
    }
    var_19 = (((var_10 + 2147483647) << (((-7943850659867281197 + 7943850659867281206) - 9))));
    var_20 = (max((max(var_2, (9 ^ var_3))), var_2));
    #pragma endscop
}
