/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_6;
    var_12 = -54603768;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = (((max(var_1, (arr_0 [i_0 - 2]))) ? (min((arr_0 [i_0 + 1]), var_8)) : ((~(arr_0 [i_0 + 2])))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_14 = var_2;
            var_15 = (max(-28958, (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_0 + 1] = 21321;
            arr_10 [i_2] [9] = ((15660246505244832541 << (arr_0 [i_0 + 2])));
        }
        var_16 -= ((var_1 ? (arr_7 [i_0 + 1]) : var_6));
    }
    var_17 += (min(-var_4, (min(var_5, (44601 ^ -21333)))));
    var_18 = -var_8;
    #pragma endscop
}
