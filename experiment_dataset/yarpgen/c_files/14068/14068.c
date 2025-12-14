/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!((max(var_1, 2147483645))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (min(var_5, var_7));
            arr_6 [i_0] = ((~((((((arr_4 [i_1] [10]) >= 3279196382)) || (((-1937343281 ? (arr_2 [i_1] [i_0] [i_0]) : (arr_2 [i_0] [10] [2])))))))));
            var_12 = ((min(1937343282, 1)));
        }
        arr_7 [i_0] [1] = (7 ^ 9966);
        arr_8 [i_0] = (((((((max(var_2, (arr_2 [i_0] [i_0] [i_0])))) ? var_2 : (arr_2 [i_0] [i_0] [i_0])))) ? (-234961338 | 0) : (max((arr_2 [0] [0] [i_0]), (32767 + -683491903423174618)))));
        var_13 = (min(((16320 | (((-2147483647 - 1) ? var_8 : 2147483645)))), (max(var_9, -1937343281))));
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        var_14 = (max(var_14, ((((((min((arr_10 [i_2 - 4]), (arr_11 [i_2])))) - ((2291494481119685954 + (arr_10 [i_2])))))))));
        var_15 -= (((((max(3317930259696192677, 5812013801358259606))) ? 0 : (((max(228, 16305)))))));
        arr_13 [i_2 + 1] [i_2 - 1] = (!-17097);
        var_16 = ((1937343253 ? 1 : -18));
    }
    #pragma endscop
}
