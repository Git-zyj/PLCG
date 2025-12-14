/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~(~var_6)))) ? (min(((var_0 ? var_14 : var_14)), 88)) : (((var_9 <= (1 || 1))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        var_19 = 1;
                        var_20 = ((-(!var_17)));
                        arr_9 [i_0] [i_1] [i_2] [i_0] = (arr_2 [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_21 -= ((~(arr_11 [i_0] [i_4 - 1] [i_4 - 1] [i_4 - 1])));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_22 *= ((228 || (arr_3 [i_0] [0] [i_2])));
                            arr_16 [i_5] [i_0] [i_0] [i_4] [i_1] = (arr_11 [i_0] [0] [11] [i_4 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_23 = max(((((var_15 ? 3117966404 : (arr_0 [i_0]))) + ((min((arr_13 [22] [i_1] [20] [i_1]), var_8))))), 1);
                            arr_19 [i_0] [i_4 - 1] [15] [i_1] [i_0] = ((342324991 ? (max(1, (var_3 - 1))) : (1 - var_1)));
                        }
                        var_24 += (((-60258 ? ((max(1, (arr_15 [i_0] [i_0] [12] [i_1])))) : ((max(24108, var_4))))));
                        var_25 = (max(var_25, ((((((arr_4 [i_4] [i_2] [i_0]) ? ((max(1, -212))) : ((-232975266 ? 1 : (arr_4 [i_0] [i_1] [i_4]))))))))));
                    }
                    var_26 = 232975265;
                }
            }
        }
    }
    var_27 = var_11;
    var_28 |= (((max(24119, (1 || var_15))) >= (min(var_8, (!-787208579)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            {
                arr_26 [i_8] [i_8] [i_8 - 4] = (((((min((arr_2 [i_8]), 18446744073709551615)))) ? ((1 << ((((min(var_4, var_9))) - 87)))) : 1));
                var_29 = (((var_12 ? 1 : ((min(var_15, 1))))));
                var_30 += ((0 ^ ((+(((arr_15 [i_7] [i_7] [i_7] [24]) / 18446744073709551615))))));
                var_31 = (max(var_31, ((((max(var_14, 111)))))));
                var_32 = (min(-229, (((max(-13934, 1))))));
            }
        }
    }
    #pragma endscop
}
