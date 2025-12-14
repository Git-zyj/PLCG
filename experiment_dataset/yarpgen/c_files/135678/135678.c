/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += (min((arr_0 [8] [i_0]), (0 ^ 16384)));
        var_12 += (max((((max(-1788163932, (arr_0 [4] [i_0]))))), (15 | -8841158288524504482)));
        var_13 += -31148;
        var_14 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = (max(var_15, (((1788163932 + (((arr_2 [i_1] [i_1]) ? (min(var_9, (arr_3 [i_1] [i_1]))) : (arr_0 [i_1] [i_1]))))))));
        var_16 = min(((-1788163932 % (max(2850544592269046074, 8841158288524504492)))), (!67108800));
        var_17 = -8841158288524504503;
        var_18 ^= ((-1788163933 ? (arr_0 [i_1] [i_1]) : ((-8841158288524504503 ? 64532 : -8841158288524504493))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_19 = (((max(8841158288524504482, -1788163932)) == ((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2]))))));

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_20 = var_4;
            var_21 = (max(((-13 && (arr_6 [i_3 - 1]))), 0));
        }
        arr_10 [i_2] = (max((arr_7 [i_2]), (arr_2 [i_2] [i_2])));
    }
    var_22 = ((((((-127 ? 63830 : -1610358182)) <= (!1873255889))) ? 22030 : (max(17127428739181318668, (((var_5 ? var_3 : var_4)))))));
    var_23 = ((var_1 && (((-18 ? -8841158288524504493 : -8841158288524504493)))));
    #pragma endscop
}
