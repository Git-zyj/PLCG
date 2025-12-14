/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_10 && (((((min(var_5, var_7))) ? (~var_3) : var_0))))))));
    var_12 = ((-(min(var_1, var_8))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((var_8 * (((((((((arr_1 [1] [i_0]) + 2147483647)) >> (((arr_0 [i_0]) - 609573046))))) && var_9)))));
        var_13 = (max(var_13, (arr_1 [i_0] [16])));
        var_14 = ((((~((var_1 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))) == (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] = ((-(max((arr_7 [i_1]), (arr_7 [8])))));
            var_15 = (((max(var_1, (arr_7 [3])))));
        }
        var_16 += ((~((-(arr_1 [i_1] [i_1])))));
        var_17 = (-((((((arr_1 [i_1] [i_1]) * (arr_6 [5] [5])))) ? (~var_7) : ((var_1 ? (arr_5 [i_1] [i_1]) : var_5)))));
    }
    var_18 = (+((var_6 ? (~var_5) : (var_3 > var_5))));
    var_19 = (max(var_19, ((((((((var_3 ? var_4 : var_6)) >= (~var_6)))) != ((((max(var_7, var_6))) ^ var_4)))))));
    #pragma endscop
}
