/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((-(!10485)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (-var_0 - 19);
        arr_3 [i_0] [i_0] = (max(1829113574, -1088869826));
        arr_4 [i_0] [i_0] = (-(max((29 - 5538299215562267433), 29)));
        var_11 = (max(var_0, ((((var_2 + 2853759740) || (((2745512869 ? 3603906208524568997 : 41))))))));
    }
    #pragma endscop
}
