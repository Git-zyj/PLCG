/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((((min((arr_4 [i_1] [i_2 - 1] [i_2]), (arr_4 [i_0] [i_1] [i_2 - 2])))) ? (22 != 1) : (((((arr_4 [i_2] [i_2 + 1] [i_2 + 2]) + 9223372036854775807)) >> (var_9 + 77)))));
                    var_10 |= ((min(31862, (arr_4 [i_1] [i_1] [i_2 + 1]))));
                    var_11 = (min(var_11, ((((max((max(33674, (arr_1 [i_0])), ((max((arr_2 [i_0] [i_1]), var_0)))))))))));
                    arr_12 [i_1] [19] [i_1] [i_1] = (max(((78 ? -3274734646377643628 : 44349)), 78));
                    arr_13 [i_0] [i_1] [i_1] [i_0] |= 55867;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_12 *= (((arr_6 [i_0] [i_0] [i_3]) * (arr_6 [i_3 - 1] [i_3 - 2] [i_3 - 1])));
                    var_13 = (((arr_2 [i_0] [i_3]) ? (((arr_3 [i_0]) | (-9223372036854775807 - 1))) : (arr_2 [i_1] [i_3 - 2])));
                }
                var_14 -= ((-6482452 ? (min((max(var_9, var_8)), ((((-32764 + 2147483647) << (arr_6 [i_1] [i_1] [i_0])))))) : (((var_2 ? (-27605 == -6) : var_6)))));
                var_15 = (max(var_15, var_8));
                var_16 = var_1;
                var_17 = (((-9223372036854775807 - 1) > (((arr_9 [i_1] [i_0]) ? (((arr_6 [i_0] [i_0] [i_1]) ? 5267636435352965968 : (arr_2 [i_1] [i_0]))) : 2147483647))));
            }
        }
    }
    var_18 = (max(var_18, var_2));
    #pragma endscop
}
