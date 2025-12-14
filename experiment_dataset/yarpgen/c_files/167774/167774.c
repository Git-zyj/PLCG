/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 |= (min(var_9, (((min(132, 4078130779)) % 255))));
    var_22 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (arr_0 [i_0 + 2] [i_1 - 1]);

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] = var_7;
                arr_11 [i_0] [i_0] [i_2] = 2013265920;
                arr_12 [i_0] [i_1] [i_2] [0] &= (((var_9 ? var_7 : var_16)));
                arr_13 [i_0] [20] [20] |= (((arr_4 [6] [i_0 + 2] [i_1 - 1]) <= 126));
                var_23 = ((var_17 != (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_24 = (max(var_24, (~100829188)));
                var_25 = ((((((arr_3 [i_0]) / var_13))) ? var_17 : ((((arr_0 [i_3] [i_1]) != 255)))));
            }
        }
        arr_16 [i_0] = 15904814923068967357;
        arr_17 [i_0] = (!var_15);
        var_26 = (((arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 2]) && var_14));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_20 [i_4] = ((var_0 ? (((min(6067, 21)))) : ((((var_17 ? var_18 : var_1))))));
        var_27 = ((-(min((arr_7 [i_4] [i_4] [i_4]), var_5))));
    }
    #pragma endscop
}
