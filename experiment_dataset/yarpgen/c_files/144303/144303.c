/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~(max(2147483643, 127)));
    var_12 = (max(var_12, var_3));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max(var_0, 2312512835))) ? ((min(58463, 65535))) : -1));
        var_13 = (min(var_13, var_5));
        arr_4 [i_0] = (max((max(-369839524, 46794)), (max(-var_0, (arr_2 [i_0] [i_0])))));
        var_14 = (min(var_14, ((max((max(1982454461, -7714489739380076020)), 65528)))));
    }
    var_15 = (max(var_15, var_1));
    #pragma endscop
}
