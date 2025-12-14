/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 32759;
    var_15 = (min(18446744073709551615, (((((min(var_10, 24421))) ? var_6 : (~var_7))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((!(((arr_1 [i_0] [i_0]) == 41114))))) < var_1));
        arr_4 [i_0] = var_3;
        var_16 -= ((-45 ? (-32767 - 1) : (!32748)));
        arr_5 [i_0] [i_0] = (~var_11);
        var_17 = (min(var_17, (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
