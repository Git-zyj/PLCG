/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((((var_6 ? (!var_2) : (arr_0 [i_0 - 1])))) ? ((((((19363 ? 930 : 126))) || ((max(var_8, var_2)))))) : (((((min(var_2, 19372))) && (((var_7 ? -19367 : 105))))))));
        var_10 -= (~((var_2 ^ (arr_3 [i_0 - 1]))));
        arr_5 [i_0] [i_0] = (max((((((70838989 ? (arr_1 [i_0]) : 177))) ? ((198 << (((arr_0 [i_0]) - 2406078443)))) : 19379)), ((~(~var_3)))));
        var_11 = (max(var_11, (arr_2 [i_0])));
        var_12 = min((((arr_2 [i_0 + 1]) ? (max((arr_3 [i_0]), var_5)) : (-2048 && var_6))), ((((max(var_1, var_3))) ? (arr_3 [i_0]) : ((-19366 ? var_1 : (arr_0 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 -= -19359;
        arr_8 [i_1] = var_0;
    }
    var_14 = max((((var_8 * var_6) - (9 / 91))), (min(var_6, var_5)));
    var_15 = ((max((min(var_2, 177)), 96)));
    #pragma endscop
}
