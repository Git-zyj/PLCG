/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((var_11 ? -116 : var_3))) ? ((var_5 - (var_2 != 1640066136))) : var_12));
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = (((min(var_1, 0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_19 = (arr_8 [i_0] [i_1] [i_2]);
                    var_20 = ((((((var_6 ? var_7 : (arr_5 [i_0])))) ^ (max(var_11, 229661316)))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((min(48408, 229661336)) ^ ((((var_11 != (min(58083, 1500896513)))))));
        var_21 = var_4;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_22 = (arr_15 [i_4] [i_3]);
                    var_23 = (min(((((arr_11 [i_4 - 1]) ? (arr_12 [i_3] [24]) : var_3))), ((-((var_5 + (arr_17 [i_3] [i_3])))))));
                    arr_19 [i_3 - 1] [i_3] [i_3 - 1] = (arr_10 [i_3 - 1] [i_5]);
                    arr_20 [i_3] = min((4065305979 && 0), (arr_14 [i_3] [i_4 - 1] [i_4 + 1]));
                }
            }
        }
        var_24 = (min((arr_18 [i_3] [i_3 + 1]), (arr_18 [i_3] [i_3 - 1])));
        arr_21 [i_3] = (min(((((arr_15 [i_3 + 3] [i_3]) ? ((var_2 ? var_9 : 32753)) : (((arr_18 [i_3] [24]) ? 1 : (arr_18 [i_3] [11])))))), (min((arr_18 [i_3 - 2] [i_3 + 2]), (arr_10 [i_3 - 2] [i_3 + 2])))));
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            arr_27 [i_6 + 2] [i_6 + 2] [i_6] = (((((min((arr_16 [i_6 - 1] [i_7] [1]), var_9)))) ? (arr_23 [i_7 + 2]) : ((-(arr_26 [i_6] [i_6 - 1])))));
            var_25 = (((arr_23 [i_6 + 2]) ? (((arr_23 [i_7 - 2]) ? var_0 : (arr_26 [i_7 - 2] [i_7]))) : (arr_25 [i_6] [11])));
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 = (arr_16 [i_6] [i_8] [5]);
            arr_32 [i_6] [i_8] [i_8] = (arr_31 [i_6] [i_6]);
            var_27 = (min(var_27, (!var_0)));
            var_28 = ((!(arr_24 [i_6] [i_8])));
        }
    }
    var_29 = var_8;
    var_30 |= var_5;
    #pragma endscop
}
