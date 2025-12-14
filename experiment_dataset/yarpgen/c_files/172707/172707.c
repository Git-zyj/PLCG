/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((32512 ? 18446744073709551612 : 46506))))));
    var_21 |= ((((((~var_15) ? var_0 : var_15))) ? ((min(62191, (18446744073709551612 >= var_14)))) : ((var_7 << (12993 - 12987)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_22 += var_0;
        var_23 = (((!((!(arr_1 [i_0] [i_0]))))));
        var_24 = (max(var_24, (arr_1 [i_0 + 1] [i_0 - 2])));
    }
    #pragma endscop
}
