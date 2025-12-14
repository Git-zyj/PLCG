/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-((~(arr_0 [i_0]))))) > ((~(-26502 & 9771782739749178741)))));
        var_17 = ((((~((~(arr_2 [i_0])))))) != (((-(arr_0 [i_0])))));
        var_18 = ((~(5222399255338922472 | -1155042961256998131)));
    }
    var_19 = (13224344818370629136 <= 5570189822918818738);
    #pragma endscop
}
