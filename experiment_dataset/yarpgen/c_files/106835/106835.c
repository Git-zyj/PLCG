/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= -var_7;
    var_21 |= var_5;
    var_22 |= ((-((~(var_13 ^ var_1)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = ((-((max(var_11, (arr_2 [i_0]))))));
        var_24 = (max(((+(max((arr_1 [i_0]), var_2)))), var_18));
        arr_3 [i_0] [2] |= var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_25 = (((arr_5 [i_1]) >= (arr_4 [i_1])));
        arr_6 [1] [1] &= (((((arr_4 [i_1]) >= 11)) ? (-9223372036854775807 - 1) : 8));
    }
    var_26 &= ((((max((var_14 - 8973857088279628372), var_18))) ? (~var_3) : (-2147483647 - 1)));
    #pragma endscop
}
