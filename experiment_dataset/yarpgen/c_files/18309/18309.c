/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = var_9;
        arr_2 [i_0] = (((!122) / (arr_0 [i_0])));
        var_17 = (((~(arr_1 [i_0]))) | (((((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (min((((arr_4 [i_1] [i_1]) >> (((max(var_14, 1760005030)) - 1760005015)))), ((max((((var_2 && (-127 - 1)))), (~var_13))))));
        var_19 = (arr_3 [i_1] [i_1]);
        var_20 = (max(var_20, (var_11 >= var_1)));
        arr_5 [i_1] [i_1] = (min(((((~1) ? 38 : 56))), ((((min(var_5, 144115188075839488))) ? (arr_4 [i_1] [i_1]) : var_11))));
    }
    var_21 = (min(var_21, (((var_1 ? ((((~var_10) && var_2))) : (var_3 << 1))))));
    var_22 = (127 == -1);
    #pragma endscop
}
