/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_0;
    var_20 = (min(var_12, ((~((1400453607 ? -1996174748 : 1996174747))))));
    var_21 = (~89);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((((((min((arr_0 [i_0]), var_1))) ? (~var_12) : var_4))) ? (max(2924438824, 2009137412)) : (((~(~67)))));
        var_23 ^= ((-(min(-1996174748, 16390048812670340263))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = ((((((var_6 ? 1926735458 : 2075088102)))) ? ((((((arr_7 [7] [i_1]) ? 40 : var_12))) ? ((((arr_4 [i_1]) >> (2382831175 - 2382831153)))) : (arr_5 [i_1]))) : (max((((-(arr_4 [i_1])))), (min(var_11, 1614591528))))));
        arr_9 [i_1] = (4588796772815186714 > 1912136120);
        arr_10 [i_1] = -1996174746;
        var_24 = ((9200227179202131797 + (((((~(arr_6 [i_1])))) ? (2382831175 | -9200227179202131798) : var_12))));
    }
    #pragma endscop
}
