/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_15 ^= (arr_3 [i_0 + 1]);

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_16 = (((arr_2 [i_0 - 2]) ? 18446744073709551605 : 65));
            arr_7 [i_0] [i_1] = var_13;
            var_17 = arr_1 [i_0];
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = ((var_5 || (arr_8 [i_0 + 1])));
            arr_11 [i_2] [i_2] [i_2] = (arr_10 [i_0] [i_0] [i_2]);
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_15 [i_3] &= 66;
        var_19 = (((-(arr_12 [i_3]))));
        arr_16 [i_3] = ((-17964158526543549204 % ((((482585547166002432 ? 2534721355 : -45151206))))));
    }
    var_20 = (min(var_20, var_14));
    #pragma endscop
}
