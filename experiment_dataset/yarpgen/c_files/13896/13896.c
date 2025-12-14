/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? (((+(((-18319 + 2147483647) << (var_6 - 65)))))) : (((min(var_11, -18314)) * (1 - 253)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 ^= ((47 || 18318) ? 8385080657010380277 : var_2);

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_14 ^= (7980429095123288571 % (22006 & var_5));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [i_2 - 1] = ((~(arr_5 [i_2] [i_2 - 1] [i_2 - 1] [i_1 - 1])));
                var_15 = var_0;
                var_16 = var_4;
            }
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_17 -= (((var_2 + 2147483647) >> (((arr_4 [i_1 - 3] [i_1 - 1] [i_1 - 3]) - 8790940927051803836))));
                    var_18 = (((arr_5 [i_4] [i_4] [i_3 - 2] [i_3]) ? ((~(arr_7 [i_0] [i_1] [i_3 - 3] [2]))) : (arr_12 [i_1] [i_1] [i_1 - 3] [i_1 + 1] [i_1])));
                    var_19 = (~18318);
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_20 = ((!(((var_3 ? -7656982521781607491 : 18318)))));
                    var_21 |= arr_11 [i_0] [i_1] [i_3] [1];
                    var_22 += (((1384789344217756693 ? -18314 : var_11)));
                }
                var_23 = (((arr_8 [i_3] [i_1 - 3] [i_0] [i_0]) ? (3109167012802934833 ^ var_9) : (arr_4 [i_3 - 2] [i_3] [i_3 + 1])));
                var_24 = (min(var_24, var_2));
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_25 = (arr_18 [i_0] [i_0] [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    {
                        var_26 |= (arr_13 [i_8 - 1] [6] [6] [i_0]);
                        var_27 |= (((!var_4) << (((arr_9 [2] [i_8 + 1] [i_8] [2]) - 25574))));
                        var_28 = (((~(arr_21 [i_0] [i_6]))));
                    }
                }
            }
        }
        arr_25 [i_0] = (arr_18 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
