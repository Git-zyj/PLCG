/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) & ((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (min((arr_1 [i_0]), (((arr_1 [1]) ^ var_4)))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((((max((min(26865, 7613642442272001972)), (((!(arr_0 [i_0]))))))) ? (((((min(0, 26865))) ? (((arr_1 [i_0]) ? var_2 : var_2)) : ((min(121, (arr_0 [i_0]))))))) : (((((1537632155 >> (3273534785337823555 - 3273534785337823536)))) ? (((18446744073709551615 ? (arr_0 [i_0]) : 4398046511103))) : 2))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = ((~(max(3778913162, 0))));
        arr_7 [1] = (((var_10 ? ((((arr_1 [i_1]) ? var_6 : var_2))) : (min((arr_0 [i_1]), 2834668250)))) * (arr_4 [i_1]));
        var_12 = (!-26865);
        arr_8 [i_1] [i_1] |= (min(3242423732655048982, ((((var_10 - var_11) + ((((arr_4 [i_1]) != var_9))))))));
    }
    var_13 = (max(((min(var_4, 2834668249))), 2));
    var_14 = (min(((max(2834668250, (!1254613359141760794)))), (var_6 + 9223372036850581504)));
    #pragma endscop
}
