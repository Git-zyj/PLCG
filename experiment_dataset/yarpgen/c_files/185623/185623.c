/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_9;
    var_12 &= var_3;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_13 = (2850788601 % var_6);
        var_14 = (arr_1 [i_0 - 3]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_4 [i_1] [i_1 - 1]);
        var_15 = (i_1 % 2 == 0) ? (((arr_2 [i_1]) << (((arr_2 [i_1]) - 287753692573529375)))) : (((((arr_2 [i_1]) + 9223372036854775807)) << (((((((arr_2 [i_1]) - 287753692573529375)) + 6204966425511385808)) - 23))));
        arr_7 [i_1] = (((arr_2 [i_1]) > (arr_2 [i_1])));
    }
    #pragma endscop
}
