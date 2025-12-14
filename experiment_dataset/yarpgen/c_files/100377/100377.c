/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(((((((var_6 ? var_3 : var_5))) ? 9223372036854775807 : (((~(arr_3 [i_1]))))))), (min((arr_2 [i_1] [i_1] [14]), var_11))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = var_13;
                        arr_10 [i_2] [i_2] [i_0] = ((var_5 ? (max((max(-9223372036854775807, var_16)), (((-(arr_9 [i_2] [8])))))) : (((((~11408733562120583433) || ((max((arr_3 [i_1]), 112)))))))));
                        var_21 = ((-(((-32743 - -9223372036854775807) >> ((((~(arr_6 [i_0 - 2] [i_1 - 1] [i_2] [i_2]))) + 30931))))));
                        var_22 = (min(var_22, (((max(9223372036854775807, (~var_10)))))));
                    }
                    var_23 = (min(((((var_3 <= var_3) ? ((max(var_12, (arr_6 [i_0] [i_1] [i_2] [i_2])))) : (arr_5 [i_2])))), (min(((14839 ? 196 : var_16)), ((((arr_5 [i_2]) > 3699840150)))))));
                    var_24 = ((((((~var_3) ? ((var_4 ? 1813206976872738736 : 16633537096836812877)) : (arr_4 [i_0 + 1] [i_1 - 3] [i_2])))) ? (~36028792723996672) : ((max((arr_2 [i_2] [i_1 - 2] [i_0 - 3]), 4010009083)))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_25 = (133 != 9223372036854775797);
                        var_26 ^= (((((var_7 ? -1805872130 : (arr_5 [i_4])))) ? -3597519673 : (arr_5 [i_4])));
                        var_27 = (((((var_3 * (arr_3 [i_2])))) ? 18 : (~9223372036854775806)));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_28 = (min(3, -9223372036854775807));
                        arr_15 [i_2] [i_1 - 2] [i_5] = ((11408733562120583424 ? 433 : 0));
                        var_29 = var_2;
                        var_30 = (min(var_30, ((min((max(9223372036854775807, (!-120))), 9223372036854775805)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
