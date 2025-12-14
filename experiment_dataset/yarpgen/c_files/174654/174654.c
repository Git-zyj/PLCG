/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4294967295;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (min((4 + 62), ((~((1 ? var_13 : 69))))));
        var_16 *= ((!(((arr_2 [i_0]) && (arr_2 [i_0])))));
        var_17 = (var_0 >> (150 - 141));
        arr_4 [i_0] [i_0] = (((((min(6522989785199633202, 34))) ? 206 : 15176939745556049363)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (((((64 ? 111 : (arr_7 [i_1])))) && ((!(arr_6 [i_1])))));
        arr_8 [i_1] [i_1] = ((!((((((98 ? var_2 : 2147483624))) | -1226530253396507803)))));
        arr_9 [i_1] = var_14;
        var_19 = ((49 || (((-3353 ? -3392935427383085459 : (~1870879385))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_20 = 41121590;
        arr_14 [i_2] = 15176939745556049367;
    }
    #pragma endscop
}
