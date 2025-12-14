/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = (((((((min(var_7, 1806837016))) ? ((-9 ? 1 : var_11)) : -var_6))) ? 2527428913 : var_19));
        arr_2 [i_0] = var_18;
        var_21 ^= (min(-106, ((((max(-1810851795503833119, -6078164171938164060))) ? 20 : 2014616209))));
        var_22 ^= (arr_0 [i_0] [7]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_23 |= ((((((arr_3 [i_1]) * (((var_0 ? -9 : 1)))))) ? (((100 <= var_5) ? 147 : (-1907491510 >= 1))) : var_3));
                        var_24 = ((((min(154100676, (min(var_3, -2104170381335039430))))) ? 5429151376688504987 : 1673955610));
                    }
                }
            }
        }
        var_25 = (((((-(1 + 93)))) ? 1 : (((((var_13 ? 1907491515 : 2104170381335039459))) ? ((((arr_4 [i_1] [i_1]) >> (var_1 - 144)))) : ((2104170381335039446 ? 4895701820171313849 : (arr_9 [11] [11] [i_1] [i_1])))))));
    }
    var_26 = -2104170381335039434;
    #pragma endscop
}
