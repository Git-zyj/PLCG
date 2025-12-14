/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 |= var_3;
        var_16 -= ((var_10 << (((-1 + 22) - 13))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [3] [i_0] = (((((-59 ? var_4 : (arr_1 [i_0] [4])))) ? ((122 ? var_1 : 9223372036854775788)) : 72));
            var_17 = (~var_6);
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_18 = ((!(arr_4 [i_2 + 3] [i_2 + 3] [i_2 + 3])));

            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                var_19 = 4494822623120683765;
                var_20 = (~var_1);
            }
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_21 = (122 - var_9);
            arr_15 [1] [1] [14] |= ((-(var_0 & var_11)));
            var_22 = (max(var_22, (((var_9 && (arr_5 [i_4 + 2] [i_0 + 3]))))));
        }
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_23 = (min(var_23, -var_13));
            arr_19 [i_0] = (((((arr_14 [i_0 + 1]) + 9223372036854775807)) >> 0));
            var_24 = (min(var_24, (1338640908 % 28804)));
        }
    }
    var_25 = var_12;
    #pragma endscop
}
