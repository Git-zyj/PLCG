/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_10 = ((((min(1, ((1035057722 ? 1 : var_9))))) ? 768362839 : ((~((-244102237 / (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_3 [i_1]);
        var_11 = (arr_4 [i_1]);
        var_12 = (1 / (max(var_1, ((12353 ? (arr_5 [i_1] [i_1]) : var_7)))));
        var_13 = (min((max((arr_5 [i_1] [i_1]), -6226704812699720929)), (((~(arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] [i_1] = (max((~var_6), (((arr_3 [i_1]) ? (max(991964819, 1698273206)) : (arr_5 [i_1] [i_1])))));
    }
    var_14 -= ((~((~(~1)))));
    #pragma endscop
}
