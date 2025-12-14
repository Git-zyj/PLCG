/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (~1);
        var_16 = ((arr_0 [i_0]) % (9180151275999783709 / var_14));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = -799045001;
            var_17 = ((63 ? 922170276 : 0));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_18 &= (((arr_5 [i_0]) == 53931));
            arr_10 [i_2] = ((((0 + (-2147483647 - 1)))) || 17898);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_19 = (arr_11 [i_0]);
            var_20 |= -1137538621;
            var_21 = ((arr_0 [i_0]) - ((var_9 - (arr_0 [i_0]))));
            var_22 ^= ((((var_10 | (arr_13 [i_0] [i_3])))) ? 0 : (~18281));
        }
        var_23 = (((((-988732967 ? -992639336 : var_5))) ? (1 * var_2) : 0));
        var_24 -= 693409423322077524;
    }
    var_25 = var_9;
    #pragma endscop
}
