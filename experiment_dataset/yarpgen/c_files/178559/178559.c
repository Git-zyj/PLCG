/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (min(((min(54001, (arr_0 [i_0])))), ((((arr_0 [i_0]) ? 65024 : 84)))));
        arr_3 [i_0] = (min(((11534 ? (arr_0 [i_0]) : 4307507308416455597)), var_0));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = var_12;
        var_19 = (((((arr_0 [i_1]) ? (((arr_5 [i_1]) / 4294967295)) : 1673321349814358010)) <= (((min((arr_4 [i_1] [i_1]), 54028))))));
        var_20 += (max((max((((-(arr_5 [1])))), (max(11518, 2)))), (582723768 + 1)));
        var_21 = ((((!(arr_5 [i_1]))) ? -33554431 : ((((((11535 ? 8 : 0))) ? 11527 : (~var_9))))));
    }
    var_22 = var_6;
    #pragma endscop
}
