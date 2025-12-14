/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 <= var_10);
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [10]))) > (max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))));
        var_14 = ((var_7 ? (arr_0 [i_0]) : 0));
        arr_3 [i_0] = ((!((max((arr_0 [i_0]), var_3)))));
        var_15 = ((~(min((max(var_2, var_10)), (arr_1 [i_0] [i_0])))));
        var_16 = ((-var_3 ? ((((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 32336))))) ? (14792 ^ 2047) : (~var_4))) : (((50743 ^ (max(var_5, (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_4 [i_1])));
        arr_7 [i_1] = ((((((~var_9) ? ((max(var_1, (arr_6 [i_1] [i_1])))) : (((((-32767 - 1) + 2147483647)) >> (((arr_4 [i_1]) - 9360))))))) ? (max(-1, (1 >> 1))) : ((((((251 ? var_9 : (arr_6 [i_1] [i_1])))) ? (var_2 * var_1) : ((max((arr_6 [i_1] [i_1]), var_5))))))));
    }
    #pragma endscop
}
