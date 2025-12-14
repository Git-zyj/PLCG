/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [1] = ((var_3 ? (((-32767 - 1) / (-32767 - 1))) : ((min((32753 && var_2), -32754)))));
        var_11 = (min(var_11, (arr_1 [8])));
        var_12 = (+-0);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 = (18446744073709551615 / -32766);
        arr_6 [i_1] = (var_1 <= 3391892045783211152);
        var_14 *= (((~var_8) ? ((920376236 ^ (arr_5 [i_1]))) : (arr_5 [i_1])));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = var_2;
        var_15 = (min(var_15, (min((((arr_9 [15]) | (~-32753))), var_4))));
        arr_12 [i_2] = (!633823531);
    }
    var_16 *= (~var_3);
    var_17 = (min(var_17, var_3));
    #pragma endscop
}
