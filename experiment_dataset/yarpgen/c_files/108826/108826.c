/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(var_2, var_8)), var_12));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 *= var_11;
        var_19 = (((((((216 ? 1 : 8505000310024670071)) == (((arr_0 [i_0 + 1]) ? -1 : var_2))))) >> (1 >= -96)));
        var_20 = (((arr_0 [i_0]) ? (61597 > var_3) : ((33072 ? -96 : (min(2696878880, 281474976710655))))));
        arr_2 [i_0 + 3] = ((!(arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 *= ((120 >> (77 - 60)));
        arr_5 [i_1] = (((arr_4 [i_1] [i_1]) >> (arr_4 [i_1] [i_1])));
        var_22 = (min(var_22, 65529));
    }
    #pragma endscop
}
