/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((var_5 ? (((arr_1 [11]) ? (arr_0 [i_0] [i_0]) : var_1)) : (arr_1 [i_0]))));
        var_15 = 2401;
        var_16 = (min(((((((-32767 - 1) ? 206 : (arr_1 [i_0])))) ? var_4 : ((var_10 ? var_5 : (arr_0 [i_0] [i_0]))))), var_12));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = ((((~((var_3 ? var_7 : 15)))) * ((max((arr_0 [i_0] [i_1]), var_9)))));
            var_18 *= -96;
            var_19 = ((arr_0 [i_0] [i_1]) > (max((~var_3), (((arr_4 [i_1] [i_0]) << (arr_3 [i_1]))))));
        }
    }
    #pragma endscop
}
