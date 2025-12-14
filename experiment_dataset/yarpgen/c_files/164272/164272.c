/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((arr_0 [15]) ? (~var_8) : ((12462867124564500577 ? (arr_1 [i_0]) : var_10))))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_14 += ((arr_0 [i_0 + 1]) ? 255 : var_4);
        var_15 = -17903976795663816867;
        var_16 = (min(var_16, ((~(var_4 & 5983876949145051038)))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_17 = arr_1 [i_1];
        arr_8 [i_1] = ((((max(7, 255))) ? ((~((248 % (arr_7 [8]))))) : 245));
    }
    var_18 = 17903976795663816867;
    #pragma endscop
}
