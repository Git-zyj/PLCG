/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 ^= ((+(((arr_0 [i_0 - 3]) / var_9))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (((((arr_0 [i_0 + 1]) ? ((-6722245673143750560 ? var_5 : 1)) : ((((-1 == (arr_2 [i_0] [i_1]))))))) & ((((((var_4 ? var_13 : -2)) == 166))))));
            var_17 = (-((var_2 ? var_10 : var_9)));
            var_18 = (arr_3 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_19 += ((~(~-231208292)));
            var_20 = (((max(12216927910561987746, 15)) / var_4));
        }
        var_21 &= (((arr_4 [i_0] [i_0]) & var_13));
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_22 = (max((((125 <= (~var_0)))), 6722245673143750556));
        var_23 = ((var_6 >> (-var_0 - 2084149555)));
    }
    var_24 = var_1;
    #pragma endscop
}
