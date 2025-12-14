/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 -= (!((max(93, 13428555395541426383))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((((~(min((arr_2 [i_0] [i_0]), 7338125590743969092))))) ? ((max(((~(arr_1 [i_0]))), (((var_2 ? (arr_2 [i_0] [i_0]) : var_5)))))) : (max((arr_1 [i_0]), 5018188678168125232)));
        arr_3 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 |= (3962 + 0);
        arr_7 [i_1] [i_1] = (min(((((3 ? 5018188678168125233 : 18446744073709551614)) * 127)), ((max(3755050171008105778, 71415568)))));
    }
    var_15 ^= (min((((var_0 - var_3) ? var_7 : var_2)), (var_1 < var_10)));
    #pragma endscop
}
