/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_6;
    var_15 -= ((var_5 - ((var_2 ? (114 | var_3) : ((2147483647 ? var_13 : var_9))))));
    var_16 = (14010475585333414723 & -103);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (242 & 17);

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_17 = 242;
            var_18 = (max(var_18, ((((arr_5 [8] [i_0 + 2] [i_1 - 3]) >> (((arr_5 [0] [i_0 - 1] [i_1 + 1]) - 22972)))))));
            var_19 = (!var_3);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_20 = ((2007803973 ? 11575 : 30284));
            var_21 = (max(var_21, 1634241662));
            arr_9 [i_0] [i_2] [i_2] = (((-127 - 1) && -15708));
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_12 [i_0] = (~var_13);
            var_22 = -24443;
        }
        var_23 = (min(var_23, (arr_0 [0])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_24 += (arr_13 [i_4] [i_4]);
        var_25 = var_1;
        var_26 = (arr_13 [i_4] [i_4]);
        var_27 = ((var_4 == ((((min(32765, 51445))) ? 1243582715105768517 : (arr_13 [i_4] [i_4])))));
    }
    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        var_28 = (max(var_28, ((min(8430, (((63 == var_5) | (~127))))))));
        var_29 = (((max(((var_3 ? (arr_17 [i_5 - 4]) : (arr_17 [i_5 - 2]))), 780359687)) != var_9));
    }
    #pragma endscop
}
