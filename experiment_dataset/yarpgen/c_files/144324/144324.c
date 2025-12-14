/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((~(max((min((arr_1 [i_0]), 31)), (max(0, var_10))))));
        var_17 = (((max(var_7, var_12)) != (max(((62914560 ? (arr_1 [i_0]) : 67108863)), ((var_13 ? var_7 : var_6))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = max(26, (arr_0 [i_1] [i_1]));
        arr_4 [i_1] = var_15;
        arr_5 [i_1] = ((var_0 >> (((max((arr_1 [i_1]), (18 != 4294967283))) - 2645901157))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_19 = (max(var_19, 51));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_17 [i_3] [i_4] = var_7;
                    var_20 = min((arr_10 [i_1] [i_1] [i_1] [i_4]), -52);
                    var_21 ^= 0;
                }
                arr_18 [i_1] [i_2] [i_3] [i_1] = max(((4294967294 ? 3584147277 : 1)), var_3);
                var_22 = (((max((arr_3 [i_1]), var_3)) > var_12));
                var_23 = (((((var_1 ? -98 : ((var_9 - (arr_1 [i_2])))))) ? var_7 : (((((((arr_7 [i_1] [9] [i_3]) ? 1124092369 : var_11)) != var_6))))));
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_22 [i_1] [i_1] [i_5] = arr_14 [i_1];
            arr_23 [i_1] |= 26;
            var_24 = (((min(((var_6 ? (arr_19 [i_1]) : 4232052736)), ((var_10 ? var_14 : 2295260480))))) ? 13 : 62914544);
        }
        arr_24 [i_1] = (max(((((arr_7 [i_1] [i_1] [i_1]) << (((-127 - 1) - 4294967163))))), var_1));
    }
    var_25 = var_8;
    #pragma endscop
}
