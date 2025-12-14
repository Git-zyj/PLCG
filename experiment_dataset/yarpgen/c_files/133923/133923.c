/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((~1) ? (~var_17) : (min(-9223372036854775795, var_1))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (~var_3) : (!var_7)));
        var_19 = ((~(~2147483647)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = (min(var_20, (-30078 < 7034)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_21 = ((~(arr_10 [i_4 + 3] [i_4] [16] [i_4])));
                            var_22 = (arr_13 [i_4] [i_4]);
                            var_23 = (((arr_14 [i_4] [7] [i_4 + 2] [i_4] [1] [i_4 + 1] [i_4 - 2]) ? (arr_10 [i_4] [17] [i_4 + 3] [17]) : 1));
                        }
                        arr_16 [i_1] [i_2] [i_2] [i_3] [i_4] = (((arr_10 [i_4 + 3] [i_4] [i_4 - 1] [i_4]) <= (arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4] [i_4 - 2])));
                    }
                }
            }
            var_24 += ((((1 ? (arr_2 [i_2]) : var_12)) <= -1913697418));
            var_25 = (min(var_25, ((((arr_12 [i_2] [i_2]) ^ (arr_12 [i_1] [i_2]))))));
        }
        var_26 = (((min((arr_13 [i_1] [20]), 2047)) | ((((min(65535, 59729))) ? (arr_8 [i_1] [i_1]) : -465414045))));
        arr_17 [i_1] = 746661735;
        var_27 = (min((min((arr_15 [13] [i_1] [i_1]), (arr_9 [i_1] [i_1]))), -1));
    }
    var_28 = -465414052;
    #pragma endscop
}
