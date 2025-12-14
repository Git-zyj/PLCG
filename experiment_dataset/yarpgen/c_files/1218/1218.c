/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 ? ((~(0 == 253))) : ((~(4095 >= var_5)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, var_10));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_20 |= var_13;
        var_21 ^= arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((min(((~((4095 ? (arr_2 [i_1] [4]) : var_13)))), var_11)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_23 = var_9;
            arr_11 [i_1] = (arr_10 [15] [i_1]);
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((-(arr_1 [10] [i_3])));
        arr_15 [i_3] [i_3] = arr_0 [i_3] [i_3];

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_24 = (!101);
                var_25 = var_15;
            }
            arr_23 [i_3] [i_3] [i_3] = ((~(arr_21 [i_3] [i_4] [i_4])));
        }
    }
    var_26 = var_9;
    var_27 = (max(var_1, 253));
    #pragma endscop
}
