/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max((max(5844327425101464978, -5844327425101464990)), -5844327425101464978));
    var_11 -= ((var_7 >= ((~(~var_4)))));
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((-30338 % (~-3945713648432345608)))));
                var_14 = -1233484648784649414;
                arr_5 [i_1 - 1] [i_0] = (((-30341 + 2147483647) >> ((((-(arr_2 [i_0] [i_0]))) - 736639749))));
                var_15 = ((~(arr_2 [i_1 - 1] [i_1 - 1])));
            }
        }
    }
    var_16 = (min(var_16, (((((max(9223372036854775807, var_7)) << (((max(var_4, 17828105240293263485)) - 17828105240293263485))))))));
    #pragma endscop
}
