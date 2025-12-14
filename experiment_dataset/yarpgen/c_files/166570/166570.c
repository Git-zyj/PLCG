/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = (((65535 >> 1) ? -21632 : (min(0, 1))));
        arr_4 [i_0 - 1] = 255;
        var_19 -= (min((arr_1 [i_0]), 234));
        arr_5 [i_0] |= ((((!(((44 ? var_12 : 42))))) ? ((min(1, 233))) : (min(((0 << (((arr_3 [i_0]) - 1642217041)))), (-118 && 1)))));
        var_20 ^= ((((!(arr_3 [i_0 + 3]))) ? ((~(max((-9223372036854775807 - 1), 205335115409232508)))) : ((max((127 & 212), (((arr_3 [i_0]) ? 255 : (arr_0 [i_0 - 1]))))))));
    }
    var_21 -= (max((((1 ? 1 : ((max(43920, var_11)))))), (min(((30260 ? var_13 : 523264)), ((min(var_9, var_4)))))));
    #pragma endscop
}
