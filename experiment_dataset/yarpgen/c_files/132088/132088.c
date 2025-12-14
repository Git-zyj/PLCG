/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_10 *= var_5;
                        arr_12 [i_0] [i_1] [i_2] = (((arr_10 [i_0] [i_1] [i_2] [i_2]) ? (arr_3 [i_3] [i_3 - 1] [i_3]) : ((-(arr_2 [i_2])))));
                    }
                }
            }
            var_11 += ((arr_5 [i_0] [i_0] [i_0 - 1] [i_0]) ? 112 : (arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0]));
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_0 + 1] [i_4] = (!6695377561922322993);
            var_12 = 110;
        }
        var_13 = (var_5 % (arr_10 [13] [13] [i_0 + 1] [i_0]));
        arr_17 [i_0] &= (arr_0 [i_0]);
        var_14 &= (arr_3 [i_0 + 1] [i_0] [i_0 + 1]);
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
    {
        var_15 = ((max(((0 ? 2529778764 : 0)), ((((-127 - 1) || (arr_6 [i_5])))))));
        var_16 = (max((arr_7 [i_5] [i_5] [i_5] [i_5]), (arr_9 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = 3163363831;
        var_17 = ((((61 ? (arr_20 [i_6]) : 3)) ^ (arr_0 [i_6])));
        var_18 *= ((12 >= (arr_6 [i_6])));
        var_19 |= var_5;
        var_20 = (((-2147483647 - 1) + (arr_21 [i_6 - 2])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_21 = 16;
        var_22 = ((var_6 ? var_2 : ((1 ? -33 : var_5))));
        arr_28 [i_7] = (((arr_1 [i_7]) / var_6));
    }
    var_23 = -45;
    var_24 = (max((-14 ^ 7753), -var_7));
    #pragma endscop
}
