/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        arr_4 [i_0] [i_0] = (min((arr_0 [12]), (((arr_2 [i_0]) % (((arr_1 [i_0]) ? 33554304 : 13255))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [7] = max(0, ((-(arr_6 [i_1]))));
        arr_8 [i_1 - 2] = (min(var_6, (((1 << 0) ? var_2 : ((0 << (14856647617911376879 - 14856647617911376863)))))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 = var_11;
        var_17 += 85;
    }
    var_18 ^= 1;
    var_19 = ((-var_4 != (min(((var_12 ? 24 : var_15)), 0))));
    var_20 = (62 == var_11);
    #pragma endscop
}
