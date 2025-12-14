/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (var_9 / var_7);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = (min(var_14, ((min(-8192, 29)))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_2] [i_2] = (((~((var_2 ? 1 : var_2)))));
                var_15 = ((~(min(var_12, -594462322))));
                var_16 = (((arr_3 [i_0]) ? ((min((arr_0 [i_0]), 1))) : ((((((((arr_2 [i_1]) % (arr_5 [i_2] [i_0])))) && ((max(var_10, -1343991104)))))))));
                var_17 = ((((max((arr_2 [i_0]), var_7))) <= var_7));
            }

            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                var_18 = 1;
                var_19 = (min(var_19, ((min((arr_0 [i_0]), (arr_6 [i_0] [i_3] [i_0] [i_3]))))));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_14 [i_0] [i_0] [i_0] [i_4] = (max(((~((-(arr_13 [i_0] [i_1]))))), (arr_13 [i_0] [i_0])));
                arr_15 [i_4] = (arr_6 [i_0] [i_1] [i_4] [i_4]);
                var_20 = (~var_2);
                var_21 = (!var_10);
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_22 = (max(var_22, -8202));
        var_23 = ((1 ? -8175 : var_4));
        var_24 = (max(var_24, (((((((arr_16 [i_5] [12]) * (arr_16 [i_5] [12])))) ? 4850609829598247385 : var_4)))));
        arr_18 [i_5] = -8203;
    }
    var_25 = (min(var_11, var_2));
    #pragma endscop
}
