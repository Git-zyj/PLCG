/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (max(1, (719426837 ^ -18446744073709551615)));
        arr_5 [i_0] = ((~(72057594037927928 | 3575540459)));
        arr_6 [i_0] [i_0] = (72057594037927932 > 117);
    }
    var_10 = (72057594037927938 > var_7);
    var_11 = (min(var_8, ((var_7 / (1 * 72057594037927928)))));
    var_12 = (122 & -var_1);
    var_13 = (max(var_13, (((-(min((0 > 10649), (((-127 - 1) ^ 16234)))))))));
    #pragma endscop
}
