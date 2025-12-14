/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 -= (~3680223817);
        arr_2 [i_0] = -614743479;
        var_12 ^= ((1 ? ((((!(((1 ? var_5 : 11186))))))) : (((92 && (arr_0 [i_0]))))));
        arr_3 [15] [11] = (min(((1067944770 ? var_3 : (((5024518484479885775 ? var_7 : var_0))))), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = (min((((~4216834710) - (min(4216834710, var_3)))), var_9));
        var_13 = 3680223825;
        arr_9 [i_1] = (max(-7895929551817876200, 1));
        arr_10 [i_1] = 2927808974;
    }
    var_14 = (1 ? 4216834710 : 2927808977);
    #pragma endscop
}
