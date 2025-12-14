/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((min(1, -1))), (~var_9)));
    var_18 = (~var_1);

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_19 = ((~(((~var_7) ^ var_14))));
        arr_3 [i_0] = 119;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_14;
        arr_8 [i_1] [i_1] = -566329482;
        arr_9 [i_1] [i_1] = (((~32766) >= (min((~1), ((max(var_14, (arr_5 [i_1]))))))));
        arr_10 [i_1] [i_1] = 1589510665;
        arr_11 [i_1] [3] = ((+(max((((arr_4 [i_1]) ^ 1)), var_15))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_20 = var_3;
        arr_14 [i_2] [i_2] = (arr_6 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_21 = max(((-((236 ? 65535 : 1)))), ((6161 ? (var_7 * 1) : (min(var_12, -1536768316)))));
        arr_19 [i_3] = ((~(min((arr_18 [i_3]), var_9))));
    }
    var_22 = (-2147483647 - 1);
    #pragma endscop
}
