/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 += ((max((min(var_12, 0), (arr_1 [i_0])))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_14 ^= ((-4 != (((arr_0 [i_0]) ? (arr_2 [i_1 + 1]) : var_3))));
            var_15 = ((-((var_1 * (arr_1 [i_0])))));
            var_16 -= ((0 ? 107 : 0));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [i_2] = max((((max(-14, 3210745820)))), (((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : -26)));
            var_17 ^= ((4264401053 ? -109 : 218));
        }
        var_18 *= (max((arr_0 [i_0]), (20120 > 1927473734)));
        var_19 |= ((((-(arr_4 [i_0] [i_0]))) + (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_20 = (-4 - 28);
        arr_10 [i_3] = ((-(arr_8 [i_3] [i_3])));
        var_21 -= ((((max(var_0, (arr_8 [i_3] [i_3]))))));
    }
    var_22 = (107 + -18);
    var_23 = var_4;
    var_24 = var_8;
    #pragma endscop
}
