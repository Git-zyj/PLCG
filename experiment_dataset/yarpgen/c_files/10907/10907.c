/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_4;
    var_21 = var_18;
    var_22 = (min((-1 / 169), var_9));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((-9223372036854775807 - 1), 1))) ? (arr_1 [i_0 - 2]) : (((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_23 = ((-(((!(!var_13))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_15;
        var_24 = ((+(max((arr_6 [i_1] [i_1]), (arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] &= (((~49152) ^ ((-(var_16 == 10761093125501544599)))));
        var_25 = ((2626272034348653254 ? (3556100051 >= -6675948244286867517) : 18446744073709551615));
    }
    #pragma endscop
}
