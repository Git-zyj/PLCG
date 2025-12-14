/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!-451076286) ? ((-1 ? -640811873 : -502581407)) : ((((max(var_1, var_2))) ? (~var_1) : -640811873)));
    var_11 = var_0;

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((((arr_0 [i_0] [i_0]) ? ((var_8 << (((var_3 + 2101012390) - 8)))) : -var_6)), (((!(arr_1 [i_0 - 3])))));
        var_12 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 = ((~(arr_2 [20])));
        var_14 -= (((((arr_2 [2]) ? (arr_0 [i_1 - 2] [i_1 + 2]) : -373332088)) >= (max((max((arr_0 [i_1] [i_1]), var_5)), ((var_9 ? var_6 : (arr_4 [i_1] [i_1])))))));
    }
    #pragma endscop
}
