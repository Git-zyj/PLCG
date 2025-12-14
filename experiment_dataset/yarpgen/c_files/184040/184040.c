/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-5124474446672291536, 12288));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (((max((((arr_2 [9]) ? var_10 : (arr_1 [i_0]))), (arr_2 [i_0]))) > (arr_1 [i_0])));
        var_20 ^= var_9;
        var_21 = (((min((arr_2 [i_0]), (arr_2 [i_0]))) && ((max((arr_2 [i_0]), var_1)))));
    }
    #pragma endscop
}
