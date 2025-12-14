/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [14] [i_0 - 1] = (min(((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))), (((arr_1 [i_0 - 1]) ? 21 : (arr_1 [i_0 - 1])))));
        arr_3 [i_0] [i_0] = var_9;
        var_18 = (((((234 || var_15) + (arr_0 [i_0 - 1]))) + var_2));
        var_19 = ((((max((min((arr_0 [i_0]), var_6)), (arr_1 [i_0 - 1])))) ? (arr_0 [i_0 - 1]) : (((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : var_4)) & (((var_0 || (arr_1 [i_0 + 1]))))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_20 = 65;
        arr_7 [i_1] [i_1] = (min((min(190, (max(13641, 234)))), (arr_5 [i_1])));

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_1 + 2] [10] [i_1 + 2] = arr_8 [i_2 - 3];
            var_21 ^= ((+(((arr_5 [i_2 - 2]) + (arr_6 [i_1 + 2])))));
        }
        var_22 = min((-2147483647 - 1), 234);
        var_23 *= (arr_4 [i_1]);
    }
    var_24 = (var_13 <= (((~((min(var_4, 234)))))));
    #pragma endscop
}
