/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_14) > (min(622647451, (var_2 | var_11)))));
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (max(var_2, (127 || 18446744073709551604)));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (arr_1 [i_1]);
        var_21 = (((max(((5386836821779258001 << (13059907251930293614 - 13059907251930293604))), 53)) >> ((((min((arr_0 [21]), (max((arr_1 [i_1]), var_14))))) + 62))));

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_22 = ((-((min((arr_0 [i_1]), (arr_0 [i_1]))))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_23 = (min(var_23, (((!((((((13059907251930293614 + (arr_13 [i_1] [i_3] [i_3])))) ? (102 == 214) : (arr_9 [i_2] [i_2] [i_2])))))))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_2] [i_3] [i_1] [1] = ((0 ? 27 : ((((min(154, -78514894)) == ((((-127 - 1) <= var_5))))))));
                        arr_22 [i_1] [i_2] [i_2] [i_1] [i_5] [i_2 - 1] [i_2] = (max(-14170499, (arr_10 [i_1] [i_5 + 1] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_1] [i_4] [i_3] [i_1] [i_1] = (((arr_8 [i_4] [16]) ? var_3 : ((33349 - (arr_11 [i_1] [i_2] [i_4])))));
                        var_24 = (min(var_24, ((((-(arr_1 [i_4])))))));
                    }
                    arr_27 [i_1] [i_1] = 5386836821779258001;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_25 = (max(var_25, ((((arr_24 [i_2 - 3] [i_3] [i_2] [i_2] [i_2 - 1]) - (arr_24 [i_2 + 1] [i_3] [i_2] [i_2] [i_2 - 2]))))));
                    var_26 = (min(var_26, var_4));
                }
                var_27 = (526378714 ^ 5);
                var_28 &= (arr_28 [i_1] [i_1] [i_1] [8] [8] [i_3]);
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_29 = ((~(arr_32 [i_1] [12] [11])));
            var_30 = min(((((max(var_12, var_10))) ? (((max((arr_20 [i_8] [i_8] [i_8] [i_1] [i_1] [i_1]), (arr_29 [i_1]))))) : (2147483647 + 5386836821779257985))), ((((((var_7 << (var_3 - 28007)))) != (min(13059907251930293627, var_17))))));
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_31 = (min(var_31, ((((((min((arr_36 [22] [14]), 1)) + (arr_32 [i_9] [i_9] [i_9])))) ? (max((1 - var_2), -31)) : ((-110 + (arr_34 [i_9] [i_9])))))));
        var_32 += (arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    #pragma endscop
}
