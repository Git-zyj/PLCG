/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= -44;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 8190585473528620643;
        arr_4 [i_0] [i_0] = -47;
        var_21 -= -23;
        arr_5 [i_0] = 46;
        var_22 = (min(var_22, -194551690));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_23 = 1407588384;
            arr_10 [i_1] [i_1] [i_1] &= -65;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_13 [i_1] [i_1] [i_3] = 112;
            arr_14 [i_1] [i_3] [i_3] = -305239807;
        }
        var_24 -= -46;
    }
    #pragma endscop
}
