/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max(var_6, (arr_0 [i_0] [12])))));
        arr_3 [i_0] = (min((((((var_3 ? -7934592494196198589 : (arr_0 [i_0] [i_0])))) || ((min(65528, (arr_1 [i_0])))))), var_0));
        arr_4 [8] = -22;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_1] [i_4] = ((-((max((min(20525, (arr_15 [i_1] [i_1] [1] [i_1] [i_1]))), 156)))));
                        arr_17 [i_1] [20] [18] = ((-(min(1707472188, (-127 - 1)))));
                        arr_18 [i_4] [i_1] [i_3] [i_3] [i_1] [i_1] = (((min((arr_1 [i_1]), (arr_11 [i_1 - 1] [i_1])))));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        arr_23 [i_5] = ((~(((min((arr_14 [i_5] [i_5] [i_5]), (arr_19 [i_5]))) - (arr_13 [i_5] [i_5])))));
        arr_24 [i_5] = (((-(arr_5 [i_5]))));
    }
    var_13 = ((!((((max(-914489579056014945, 1944429263))) && (var_3 || var_6)))));
    var_14 = ((((max(32765, -557870437383834579)) == var_10)));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = (((((-6768084999534267099 / (arr_6 [i_6])))) ? -9223372036854775805 : var_1));
        arr_29 [4] [i_6] = (((arr_27 [i_6]) / (((arr_25 [i_6]) ? 9964 : (arr_10 [i_6] [i_6] [i_6])))));
        arr_30 [i_6] = var_7;
    }
    var_15 = (min((((~var_1) ? (((2541715823 << (-9988 + 10018)))) : (var_9 & var_4))), -var_7));
    #pragma endscop
}
