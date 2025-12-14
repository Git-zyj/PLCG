/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 -= (max((arr_1 [i_0]), (min(var_10, -839901799))));
        arr_3 [i_0] [i_0] = var_9;
        var_16 |= (min(2199023190016, 44648));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_17 = (max(((max(-839901799, 16383))), -2199023190017));
            var_18 = (((arr_6 [i_1 + 1] [i_2 + 2]) << (var_1 - 6854675509996835395)));
        }
        var_19 = (max(var_19, (2199023190021 & 23)));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 = (max(var_20, (((!(((var_9 & (arr_2 [i_3] [i_3])))))))));
        var_21 = ((2199023190024 ? var_8 : 2055348002));
    }
    var_22 = (max(var_22, -var_11));
    #pragma endscop
}
