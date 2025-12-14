/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!10811);
    var_16 = var_7;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = 1935304966;
        var_18 = ((((~(arr_0 [i_0 + 1] [i_0]))) & ((~(arr_0 [i_0 + 1] [8])))));
        var_19 = (min((min((((var_9 ? 50098 : 2359662329))), ((45139 ? 2288244321 : 13408640568100790162)))), ((min(938716137, var_10)))));
        arr_3 [i_0] [i_0 + 1] = ((((((((!(arr_0 [i_0] [i_0 + 1]))))) ^ ((var_14 ? 22043948599072001 : 17275126313124746567)))) ^ -var_5));
        var_20 = (min((((arr_0 [i_0] [i_0]) ? ((14 ? 4194303 : 0)) : (((0 >> (-5653438376422468097 + 5653438376422468114)))))), ((((arr_1 [i_0 + 1] [i_0 + 1]) ? ((max(101, 81))) : 15438)))));
    }
    var_21 = var_13;
    #pragma endscop
}
