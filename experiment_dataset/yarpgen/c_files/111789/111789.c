/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((79 ? 0 : (min(((var_9 ? 28660 : var_13)), (((var_16 ? 28660 : var_1)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (-2147483635 ? (24374 != 41162) : 747761737);
        arr_3 [i_0] = ((arr_0 [i_0]) ? (((arr_1 [11] [11]) / var_7)) : (28688 <= var_3));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [4] &= 91;
            var_20 = (-6962112244425415598 != 60);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_21 = (((arr_8 [i_2] [i_2]) ? var_2 : (arr_8 [i_0 - 1] [i_2])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = (arr_8 [i_0] [i_2]);
                var_23 = (max(var_23, (var_2 < var_4)));
                var_24 = var_16;
            }
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((((arr_1 [i_0 - 1] [i_0]) ? (arr_5 [i_4]) : 723610019)) | (arr_1 [i_0 + 1] [i_0 + 1]));
            var_25 = (((2339185357 ? 4294967295 : 51195107)));
            arr_16 [i_4] [i_0 + 1] = var_6;
            var_26 = (arr_7 [i_4]);
        }
        var_27 = ((!(24377 % 127)));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_21 [i_5 + 2] [i_5] = ((((((max((arr_19 [i_5]), 27))) || (1495912657 <= 12))) && (((~(arr_17 [i_5 + 1]))))));
        arr_22 [i_5] = ((((arr_18 [i_5 - 1] [i_5 + 1]) ? 431068551 : var_10)));
        arr_23 [i_5] [i_5] = ((((arr_17 [i_5 + 1]) ? (arr_17 [i_5 - 1]) : 0)));
        var_28 = (min(((((var_6 <= (arr_17 [i_5]))) ? (~var_5) : (arr_19 [i_5]))), (arr_17 [i_5 - 1])));
    }
    var_29 = ((((((max(var_14, var_6))) ? ((var_3 ? 13469632390230581248 : var_1)) : 5)) ^ (((-5712684833787798695 ? var_6 : 127)))));
    #pragma endscop
}
