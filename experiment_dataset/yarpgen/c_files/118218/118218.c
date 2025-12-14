/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_10 && var_10) ? (~var_5) : (~var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 ^= (max((min((max((arr_5 [i_0] [i_4] [i_4] [i_3]), 16383)), (!16367))), (min(((min(var_4, 1))), -16402))));
                                arr_12 [i_0] [i_3] [i_4] = (min((arr_11 [i_0] [i_2] [i_0]), 3932160));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((+(min((arr_16 [6] [i_1] [i_1] [i_5] [i_7]), -65532)))))));
                                var_14 *= var_6;
                                var_15 = (((arr_10 [i_6] [i_0] [i_6 + 2] [i_6 - 2] [i_0] [i_6 - 3]) || (((var_1 ? var_3 : (~var_6))))));
                                var_16 = ((var_6 > ((+(((arr_20 [i_5] [0] [i_5] [i_5] [i_5] [i_5]) << (((arr_5 [i_7] [i_7] [i_7] [21]) + 1297504228))))))));
                                arr_23 [i_0] [i_0] [14] [i_0] [14] = (max(var_5, (arr_5 [i_0] [i_1] [i_5] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                var_17 = (max((min((arr_25 [i_8] [i_9]), 657209455)), ((((~var_3) <= (((((arr_3 [i_8] [i_9]) != (arr_3 [i_8] [i_9]))))))))));
                var_18 *= ((((!(~var_6))) ? (((min(65512, var_9)))) : (!1)));
                arr_29 [i_8] [i_9] = ((((min((min(-46, 35428)), (arr_21 [i_8] [i_9])))) == (var_2 | var_10)));
                var_19 = (+((var_1 ? (arr_17 [i_8] [i_8] [i_9] [i_9]) : (arr_9 [i_8] [i_9] [15] [15]))));
                arr_30 [i_9] = ((+(min((min((arr_13 [i_8] [22] [i_8]), var_7)), (!var_10)))));
            }
        }
    }
    var_20 = (var_3 | var_2);
    var_21 = var_2;
    #pragma endscop
}
