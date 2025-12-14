/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((var_14 ? -var_0 : (((min(108, 1))))))) ? var_9 : var_5))));
    var_17 = ((~((max(147, 134)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_18 = 28524;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (!((min((~var_8), 217))));
        arr_6 [i_1] = -215;
        arr_7 [i_1] [i_1] = ((min(var_8, ((min((arr_0 [i_1]), 34))))));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_19 = ((+(((arr_4 [i_2 + 1]) ? (arr_4 [i_1]) : 14))));
            arr_10 [i_1] [10] [i_1] = (max(((8126464 & (arr_9 [i_1]))), ((((32767 ? 4088117474 : 34050))))));
            var_20 = 0;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = ((!(((8534812711062469052 / (((25368 ? var_12 : (arr_8 [i_1] [6] [i_1])))))))));
            var_22 = (((197 ? (arr_8 [i_3] [i_1] [1]) : var_2)));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                var_23 = (max((((((((!(arr_0 [i_4]))))) == var_6))), 189));
                var_24 = 34050;
                var_25 = min((min((arr_14 [i_5 - 1]), 2102990859985376650)), var_15);
            }
            arr_18 [i_1] [1] = ((max((arr_16 [i_1] [i_1] [i_1]), (arr_16 [i_4] [i_1] [i_1]))));
        }
    }
    #pragma endscop
}
