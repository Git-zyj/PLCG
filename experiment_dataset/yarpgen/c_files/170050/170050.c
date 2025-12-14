/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [17] = ((((((!(arr_1 [14] [i_0]))) ? (((var_3 ? var_6 : 43))) : ((2709374933 - (arr_0 [i_0] [i_0])))))) ? 2709374949 : ((((!(arr_0 [i_0] [i_0]))))));
        arr_3 [1] [i_0] = -57165;
    }
    var_11 = var_3;
    var_12 = 27;
    var_13 = 27;
    #pragma endscop
}
