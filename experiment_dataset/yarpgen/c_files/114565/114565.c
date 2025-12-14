/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -3588080190;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 += (max(var_7, (arr_0 [i_0] [i_0])));
        var_20 -= -5744;
        arr_3 [i_0] = (!-5368);
        var_21 ^= ((!(((-1091349396 ? ((var_0 ? 7066072561805227551 : 1)) : (~var_8))))));
    }
    var_22 = ((max(-24, ((12263 ? var_13 : -12239)))));
    var_23 = 5895810225088740008;
    var_24 -= max((var_7 < var_9), 1);
    #pragma endscop
}
