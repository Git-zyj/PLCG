/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    var_20 *= var_1;
    var_21 = (min(var_21, ((((~2078142715) | 0)))));
    var_22 = ((var_5 ? var_16 : (((max(var_0, var_15)) * (15400877752407060587 <= var_18)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 ^= var_3;

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_1] = 161;
            var_24 += ((3045866321302491054 >> (-2078142702 + 2078142709)));
            var_25 -= var_0;
            arr_7 [i_1] = (arr_0 [i_1]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                var_26 = (((arr_11 [i_3 - 1] [i_3 - 2]) << (38220 - 38199)));
                var_27 |= 3045866321302491028;
            }
            arr_12 [i_2] = ((!-1779269379) && 15400877752407060603);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_15 [18] [i_4] [i_4] = (var_18 % -780217662);
            arr_16 [i_4] [i_0] [i_4] = (((!var_10) ? (4503324749463552 ^ 0) : (arr_5 [i_0] [i_4] [i_0])));
            var_28 -= (((arr_9 [i_0] [4] [i_0]) ? (var_9 < 9) : var_8));
        }
    }
    #pragma endscop
}
