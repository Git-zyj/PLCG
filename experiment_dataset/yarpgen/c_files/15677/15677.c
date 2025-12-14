/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = ((-(max((var_10 & 24758), -0))));
        var_14 = ((~((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (max(var_15, (((~((10140 - (arr_2 [i_1]))))))));
            var_16 = (max(var_16, -14));
            var_17 ^= (((((((~(arr_5 [i_1] [i_2]))) % -14))) ? 2926790713 : (arr_2 [11])));
        }
        arr_6 [i_1] = ((!(var_8 + 27357)));
    }
    var_18 = (((-(var_6 & var_5))));
    #pragma endscop
}
