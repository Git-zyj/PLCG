/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 |= (((-(arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                        var_14 = (max(var_14, 2334741867));
                        var_15 |= (max(3636247299, (arr_10 [i_0] [i_1] [i_3])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, 3636247299));
                            arr_13 [i_1] [i_2] [i_1] |= (arr_1 [i_3]);
                            arr_14 [i_0] [i_2] [i_1] [i_2] [i_3] [i_4] = ((~(arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            var_17 = max((max((max((arr_10 [i_0 - 1] [i_0 - 1] [i_2]), (arr_11 [i_0] [i_2] [i_2] [i_3] [i_4]))), (arr_6 [i_0 - 1] [i_1] [i_2] [i_1]))), (((min(0, 1002587953)))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_18 = ((max((arr_12 [i_5] [i_5] [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), 268435456)));
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_0] = (arr_10 [i_2] [i_1] [i_2]);
                            var_19 |= ((3636247303 - ((((-32754 < (arr_1 [i_5]))) ? (arr_9 [i_0] [i_0] [i_3] [i_1]) : (arr_7 [i_1] [i_1] [i_1] [i_1])))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] = (((max(462514083, 237)) / (((max((arr_15 [i_0 + 1] [i_0 - 1]), 18))))));
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_6] |= 19;
                            var_20 = (--268435456);
                        }
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = (~8900733099189760621);
        var_21 = 8388607;
    }
    var_22 = (max((((max(111, var_6)) << (((-32723 + 32781) - 58)))), 8388630));
    #pragma endscop
}
