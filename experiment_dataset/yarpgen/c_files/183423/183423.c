/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = -6516459315292590733;
        var_15 = (min(var_15, ((max(((-6516459315292590749 ? -6516459315292590754 : 6516459315292590727)), (arr_0 [i_0 + 3]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_16 = (((arr_2 [i_1]) ? 6516459315292590739 : (arr_1 [i_1])));
            var_17 -= arr_7 [i_2 + 1] [i_2 - 1];
            arr_8 [i_2] [i_1] = (arr_0 [9]);
        }
        arr_9 [i_1] = (((((var_10 ? var_11 : (arr_2 [i_1])))) ? var_1 : (((-2098191777 ? var_11 : 96)))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_18 = (arr_10 [i_1 + 1] [i_3]);

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    var_19 = ((var_6 > (arr_2 [i_1 + 2])));
                    var_20 = (((-8192 + 2147483647) << (((arr_13 [i_5 - 2] [i_1 + 2]) - 9227862474652124544))));
                }
                var_21 += (((arr_17 [i_1] [i_3] [i_3] [i_3]) ? (arr_6 [i_1 + 2]) : (arr_15 [i_1] [i_1 + 3] [i_1] [i_1])));
                arr_20 [i_4] [i_1] = (((arr_14 [i_3] [i_3] [i_3] [i_1]) >= 1940995016));
                arr_21 [i_1 + 1] [i_3] [2] [i_4] &= (arr_19 [i_1 + 1] [i_3] [0] [i_4] [i_4]);
            }
            var_22 = (max(var_22, var_10));
        }
        var_23 = (((arr_14 [i_1 - 1] [9] [i_1 + 1] [i_1 + 1]) ? var_6 : 6516459315292590749));
    }
    var_24 = var_7;
    var_25 = 6516459315292590735;
    var_26 |= var_2;
    #pragma endscop
}
