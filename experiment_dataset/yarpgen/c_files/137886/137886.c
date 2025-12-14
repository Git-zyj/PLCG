/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_5, ((max(((min(-36, var_1))), ((41068 ? var_3 : var_3))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = 36;
            var_15 = (arr_1 [i_0]);
            var_16 = (min((max((arr_1 [i_0]), var_8)), var_8));
            arr_5 [11] [i_0] = (max(var_5, (min(((var_9 ? var_11 : var_2)), ((((arr_1 [i_0]) || var_6)))))));
            arr_6 [12] &= (min((max((arr_3 [i_1 + 1] [i_1] [12]), 1)), ((((((arr_3 [i_0] [i_0] [4]) ? -37 : (arr_0 [2] [2]))) <= (-36 * var_3))))));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 -= var_11;
                        var_18 = (min(var_18, ((min((arr_0 [i_3] [i_3]), (((-(arr_1 [i_3])))))))));
                        var_19 = (((110 ? 36 : var_10)));
                    }
                }
            }
            arr_16 [i_0] [i_0] [i_0] = -1152921504606846976;
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    var_20 = (((((~(arr_2 [i_0] [i_0])))) - -var_10));
                    var_21 = (min(var_21, (((var_9 ? ((1152921504606846963 & (max((arr_19 [i_6]), (arr_17 [6] [i_5] [i_6]))))) : (max((~-36), (max(94, -1)))))))));
                    arr_23 [i_6] [i_0] [i_0] = (arr_12 [i_0] [i_0]);
                    var_22 = (min(var_22, (((((((((arr_21 [i_6 + 1] [i_0]) + 2147483647)) << (726382482 - 726382482)))) ? (min((arr_14 [i_0] [i_5] [i_5] [i_6 - 1]), ((-64 ? -1152921504606846976 : 18)))) : (((var_7 * (arr_11 [i_0] [i_5] [i_5] [i_6 + 2])))))))));
                    var_23 = -1108236912;
                }
            }
        }
    }
    #pragma endscop
}
