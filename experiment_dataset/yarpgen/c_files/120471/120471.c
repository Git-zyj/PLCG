/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ? (max((-32767 - 1), var_14)) : 1));
    var_19 |= ((((((63204 / 1073741823) ? ((-2147483644 ? 65523 : 251)) : var_7))) || (((var_10 ? var_1 : 14166)))));
    var_20 ^= 27637;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, (((~(min(((max((arr_2 [1]), (arr_2 [i_0])))), (((arr_0 [i_0 - 1]) ? 127 : var_9)))))))));
        arr_3 [i_0] [i_0] |= -104;
    }
    var_22 &= var_16;
    #pragma endscop
}
