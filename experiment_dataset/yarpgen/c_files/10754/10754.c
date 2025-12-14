/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((-(arr_3 [i_0 - 2])));
        var_18 = (min(var_18, ((min((min((max(2305843009213693951, (-127 - 1))), -117)), 1442997135)))));
        arr_5 [i_0] = (~220);
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 + 1] [i_1 - 1] = (min((min((((1442997135 ? (arr_3 [i_1]) : 234))), var_9)), ((min((arr_2 [i_1]), ((-117 & (arr_6 [i_1] [i_1]))))))));
        var_19 = (max(var_19, (((-(max((~15220), (arr_7 [i_1] [i_1]))))))));
    }
    var_20 = (~-32641);
    var_21 = var_2;
    var_22 = (max(var_22, -var_14));
    var_23 = var_0;
    #pragma endscop
}
