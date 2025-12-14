/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (~var_8);
        var_14 = ((var_7 != ((((arr_2 [i_0]) ^ var_5)))));
        var_15 = (2570872934659351431 & 1);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                var_16 = ((min(((31 ? var_10 : 13208651990297092817)), var_13)) >> (((max(var_13, var_6)) - 7622003357975115039)));
                arr_8 [i_1] [i_1] [i_2] = (((((1 ? 1 : (max(-1393746903, 1))))) ? 1 : 139));
                var_17 *= (((((((((arr_4 [12]) ? var_2 : (arr_5 [12]))) == 161)))) * (min(var_9, var_7))));
                arr_9 [i_1] [i_2] [i_1] = (max((min(-54, (max(40114, 2194927375147885248)))), 124));
            }
        }
    }
    #pragma endscop
}
