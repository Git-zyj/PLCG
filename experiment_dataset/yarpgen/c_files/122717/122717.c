/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((min((((var_3 ? 8388352 : var_4))), var_6))), (var_8 - var_7)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(var_13, ((((+(((arr_1 [i_0]) - (arr_3 [i_0] [i_0]))))) - var_11))));
        arr_4 [i_0] [i_0] = 12;
        arr_5 [i_0] = (arr_1 [16]);
        var_14 &= 9281972558746237506;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_9 [i_1] [i_0] |= (arr_0 [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = ((((((-(arr_10 [i_0] [i_0] [i_1]))))) ? ((8388352 * (min((arr_6 [i_2]), 9164771514963314093)))) : ((((arr_12 [8] [i_2] [1] [10] [i_1] [i_0]) ? (arr_13 [i_3] [i_2] [i_1] [i_0]) : (var_4 - 21))))));
                        arr_14 [i_3] [i_3] [i_3] = var_0;
                        arr_15 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = (!(((~(!var_7)))));
                        arr_16 [i_2] [i_2] [i_2] [i_2] [8] [i_2] = var_9;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_16 = ((arr_17 [i_0 - 1] [i_0 - 1]) ? 1 : 56416);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_25 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0] = (~var_8);
                        var_17 *= (((7357970728301584068 * var_8) == ((10294293152286953000 ? var_6 : 0))));
                        var_18 = (((-2147483640 + 2147483647) >> (((arr_20 [i_0] [i_4] [i_0 + 1] [i_5 + 1]) - 145))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_37 [i_7] [i_7] = ((var_11 << (14493449494236748913 - 14493449494236748907)));
                            var_19 *= (-2147483636 | var_8);
                        }
                        arr_38 [i_0] [i_7] = 3;
                        var_20 |= ((((~(arr_0 [9])))) ^ ((var_9 ? 2147483639 : var_8)));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_41 [i_10] = (min((((~var_10) ? ((min(1, (arr_39 [i_10] [i_10])))) : var_5)), ((min((arr_39 [i_10] [i_10]), 2654253197)))));
        arr_42 [i_10] = ((-(arr_39 [i_10] [i_10])));
    }
    #pragma endscop
}
