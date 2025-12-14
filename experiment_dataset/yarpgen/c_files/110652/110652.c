/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_10, (max((127 > -127), (127 % 122)))));
    var_12 = (~var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((-127 ? var_0 : var_6));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_8 [0] [i_1] = (var_3 && var_5);
            var_13 = ((-98 ? var_8 : 9223372036854775807));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_12 [13] = ((~var_2) ? (((127 ? 20181 : 3943251521))) : ((var_6 ? 236 : var_5)));
            var_14 = ((-2675304892 ? 44949 : -642119710));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [7] = (var_6 <= var_0);
            var_15 = ((96 ? 1 : 1));
            arr_17 [i_0] [i_3] [i_0] = (1 < var_5);
            var_16 = (~var_0);
            arr_18 [i_0] [i_0] [i_3] = (~-29962);
        }
        arr_19 [i_0] [i_0] = (124 < -var_2);
    }
    #pragma endscop
}
