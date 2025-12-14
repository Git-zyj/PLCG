/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = var_18;
        var_20 = (~3);
        var_21 -= (~15626);
        arr_2 [i_0] |= (((((-1073741824 ? -4 : (arr_1 [i_0] [i_0])))) == (min(8780, var_0))));
    }
    var_22 = (min((-16750 <= 16738), (65535 < 567922376)));
    var_23 = (~var_18);
    #pragma endscop
}
