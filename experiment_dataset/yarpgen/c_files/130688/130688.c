/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_9 ? ((-9105763999931416013 ? 4014075424 : -6280230414999943355)) : (max(var_9, (min(var_12, var_13))))));
    var_15 = (max(var_15, (~var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (((max((max((arr_3 [i_0] [i_2]), 9105763999931416008)), -var_7))) ? (max(2023371339891844336, 145)) : ((~((var_6 ? 0 : 7503998070565442542)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 ^= -125;
                                arr_14 [7] [i_0] [i_0] [i_1] [9] = ((~((((((arr_11 [i_0] [16]) <= (arr_0 [i_1])))) & (max(var_11, var_0))))));
                                arr_15 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] = (min((!var_8), (min((arr_6 [i_0] [i_0] [i_2]), (arr_7 [i_1] [i_2 - 1] [14] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_18 = (((((((max((arr_19 [i_5] [i_5] [i_6 + 1]), var_5))) ? (arr_20 [i_6 - 1] [i_6 - 1] [i_5 + 1]) : (min(var_12, (arr_19 [i_6 - 1] [i_5] [i_5])))))) ? var_13 : (((((arr_17 [i_5] [i_6]) ? 111 : var_4)) | (~var_0)))));

                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    arr_25 [i_5] [i_6] [i_5] [i_5] = (-((-((var_9 ? 0 : var_10)))));
                    var_19 -= ((-((39904 ? 27 : 247))));
                    var_20 = (((((arr_21 [i_6]) ? (((!(arr_21 [i_6])))) : (arr_19 [i_5 + 1] [i_5 + 1] [17])))) ? (min(var_11, (arr_20 [i_6 - 1] [i_7 - 2] [i_5 - 2]))) : var_4);
                    var_21 = (min(var_21, (((~((~((65535 ? 4739139184688235230 : 149)))))))));
                }
                var_22 = (+((var_12 ? (((arr_18 [7] [i_6]) ? var_4 : (arr_21 [2]))) : (max(9223372036854775806, 2147483647)))));
                var_23 = (max((((!((max(var_12, 39904)))))), (((arr_23 [6] [i_5 - 1] [i_6] [i_5 - 2]) << ((((min((arr_21 [10]), (arr_18 [i_5 + 1] [i_6])))) - 6))))));
                var_24 *= ((((!(arr_16 [i_5 + 1] [i_6 + 1]))) ? (arr_19 [i_5] [i_5] [i_5]) : var_10));
            }
        }
    }
    #pragma endscop
}
