/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (+(((!((min((arr_2 [i_0] [i_1 - 2]), 24574)))))));
                arr_7 [i_0] [i_0] = (i_0 % 2 == 0) ? (((var_12 ? ((((((arr_4 [i_0] [i_0] [i_1]) << (((arr_5 [i_0 + 3] [i_0]) - 1841335444))))) ? (17153452190910363687 + 15671897014632957290) : -1)) : 3661549498382991770))) : (((var_12 ? ((((((arr_4 [i_0] [i_0] [i_1]) << (((((((arr_5 [i_0 + 3] [i_0]) - 1841335444)) + 769785378)) - 24))))) ? (17153452190910363687 + 15671897014632957290) : -1)) : 3661549498382991770)));
                var_15 = (((((arr_3 [i_0]) & (var_13 - var_6))) + ((((19 ? 123 : (-2147483647 - 1))) & ((var_3 ? var_0 : (arr_0 [i_0])))))));
            }
        }
    }
    var_16 = (((((var_10 ? (min(-1, var_11)) : ((var_4 >> (var_0 - 337624707)))))) || ((((-2147483643 | 2305843009213693951) ? ((((var_12 + 2147483647) << (3661549498382991787 - 3661549498382991787)))) : (var_1 + var_12))))));
    #pragma endscop
}
