/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((18355 ? ((-var_1 ? ((var_9 ? -29701 : 0)) : (~var_9))) : (((var_2 != ((var_1 ? var_8 : 39)))))));
    var_12 |= -9223372036854775807;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_13 &= ((-(arr_0 [4])));
        var_14 = (!(arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_15 = ((10597215074810365750 ? ((3192 ? (arr_5 [i_1]) : (arr_2 [i_1] [i_1]))) : (((arr_4 [i_1]) << (((arr_1 [i_1]) - 4375668440194907200))))));
        var_16 = ((~(arr_4 [i_1 + 1])));
        var_17 = 9223372036854775807;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = ((((((arr_4 [i_1]) ? 0 : 1))) ? ((57000 ? (arr_2 [i_1] [i_1]) : (arr_5 [i_1]))) : (arr_0 [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 = 2147483647;
                        var_19 = ((((17851374317477639647 ? var_2 : var_6))) ? (arr_7 [i_1 - 2] [i_1 - 2] [i_1]) : (((arr_1 [i_4]) ? (arr_5 [i_4]) : 14569187308537770533)));
                        var_20 = ((-(arr_0 [i_3])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_6] [i_6] [i_1] = 1442363591;
                        var_21 = (~1123636188);
                        var_22 = (min(var_22, (arr_2 [0] [3])));
                    }
                }
            }
            var_23 = (!var_3);

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_24 = (arr_14 [i_1]);
                arr_24 [i_7] [i_2] [i_1] [i_7] = (((((4630988905672766266 / (arr_7 [i_1] [i_1] [i_7])))) ? (arr_3 [i_1 - 1]) : (!10061900468635334666)));
            }
        }
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            var_25 = (~var_0);
            var_26 = ((arr_11 [4] [i_8] [i_8 + 2] [i_8] [i_8 + 2]) && (arr_6 [i_8 + 1] [i_1]));
        }
    }
    for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
    {
        var_27 = ((((arr_26 [i_9 + 1] [i_9 + 1]) | (-9223372036854775807 - 1))) ^ (((min((arr_26 [i_9 - 2] [i_9 + 1]), (arr_26 [i_9 - 1] [i_9 + 1]))))));
        arr_31 [i_9] = ((-((((((arr_1 [i_9]) ? var_1 : (arr_0 [1]))) != ((var_0 ? 1 : var_9)))))));
        var_28 = (((((3948346613 && -6828853923404019184) ? ((((arr_17 [7] [i_9] [i_9] [i_9] [i_9]) ? (arr_29 [8] [8]) : (arr_30 [i_9])))) : (min((arr_0 [2]), var_3)))) * (((min((max((arr_21 [i_9] [i_9] [i_9] [i_9]), (arr_16 [i_9]))), (arr_26 [i_9 - 2] [i_9 - 2])))))));
    }
    #pragma endscop
}
