/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(3041960, -1386168046));
    var_16 &= 5407;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_17 += ((!(arr_0 [i_0 - 1])));
        arr_4 [i_0] [5] = (((min((min((arr_1 [i_0]), (arr_2 [16] [i_0]))), 1858490926)) & (arr_1 [i_0])));
        arr_5 [10] &= ((max(((max(-58, 100)), ((6519069675252643363 & (arr_1 [2])))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 |= ((((max((arr_7 [i_1]), (arr_6 [i_1])))) ? (min((((arr_7 [i_1]) ? var_14 : 15714079775317190203)), -106)) : ((max((((var_12 >= (arr_6 [i_1])))), (arr_6 [i_1]))))));
        arr_9 [i_1] &= var_8;
    }
    var_19 = var_9;
    var_20 = (min(var_20, ((((((-(406991465 / var_3)))) | var_6)))));
    #pragma endscop
}
