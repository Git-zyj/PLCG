/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (~43);
        var_10 = (max(var_10, -var_9));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            {
                var_11 = (max(var_11, (((!(((2451722525087696138 ? 65525 : 1))))))));
                var_12 = (arr_0 [i_1]);
                arr_9 [i_1] = (((max(2047271666, (arr_0 [i_1])))));
            }
        }
    }
    var_13 = (var_6 < 4499201580859392);
    #pragma endscop
}
