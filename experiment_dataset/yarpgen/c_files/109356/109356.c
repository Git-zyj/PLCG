/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -1896216538;
        arr_3 [i_0] = (245 ? 212 : (arr_1 [i_0]));
        var_20 -= ((1836951312 ? ((var_1 ? 10 : (arr_0 [i_0] [i_0]))) : var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_21 -= (((arr_11 [i_2]) ? (((!(arr_4 [i_2])))) : (((-1836951325 + 2147483647) >> (((arr_12 [i_1] [i_1] [i_2] [i_1] [i_1]) + 1537501549))))));
                        var_22 = (-2147483647 - 1);
                        var_23 = (min(var_23, var_10));
                    }
                }
            }
        }
        var_24 += ((arr_9 [i_1] [i_1] [i_1]) ? ((0 * (arr_12 [i_1] [1] [1] [i_1] [i_1]))) : var_15);
        arr_13 [i_1] [i_1] = (!var_2);
    }
    var_25 -= (~245);
    var_26 = (((((var_18 && (((var_18 ? -1896216538 : 153)))))) + (~var_6)));
    #pragma endscop
}
