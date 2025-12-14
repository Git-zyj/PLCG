/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 144;
    var_11 ^= min((min((max(var_2, 6460604804598121269)), (min(18446744073709551615, 1)))), ((min(var_4, var_0))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0 + 1]);
        arr_3 [1] = (min((min(-1808003253646912008, 247)), (min(1892665424, (max((arr_1 [i_0]), (arr_0 [i_0])))))));
        var_12 = ((-((~(min((arr_1 [i_0]), 1808003253646912023))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 65355;
        arr_8 [i_1 - 2] [i_1] = (((min(4294967295, var_9))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_13 ^= var_7;
        arr_12 [i_2] = (arr_9 [i_2] [i_2]);
        var_14 = (min((min(((max((arr_4 [i_2] [8]), (arr_4 [i_2] [1])))), (min(181, 9)))), (max((max(18446744073709551614, var_9)), (~var_4)))));
        arr_13 [i_2] = var_9;
    }
    var_15 = var_7;
    var_16 = 2143548187;
    #pragma endscop
}
