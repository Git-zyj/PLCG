/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = -7574;
                var_12 *= ((((max(-7590, (((arr_0 [i_0] [i_1 + 1]) ? var_10 : (arr_2 [0])))))) ? (((((((arr_5 [i_0] [8]) ? var_5 : (-32767 - 1))) > 1)))) : (max((max(var_2, (arr_0 [i_0] [i_1]))), var_9))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_13 = (max(var_13, (arr_12 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4] [i_4])));
                                var_14 = var_9;
                                var_15 = (!var_10);
                                var_16 = min(2128346536, 14124539049789811461);
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                var_17 += (arr_14 [i_2]);
                                var_18 += (max((((((7576 ? 1 : -11))) ? (((arr_1 [i_0]) ? var_2 : -7568)) : -11)), ((min((((arr_10 [i_0] [i_1] [8] [i_3 - 1] [i_5]) * 2987699992)), (arr_11 [i_2 - 1] [i_1] [i_2 - 1] [7] [i_5] [i_3 - 1] [3]))))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_3 - 1] [i_2 + 1] [i_1] [i_0] = -3352462668;
                                var_19 = min((((-((-4596985825355462071 ? (arr_12 [i_0] [i_0] [i_2] [i_3] [10] [i_6] [i_6]) : (arr_11 [i_0] [i_0] [i_1] [i_1] [9] [i_3] [3])))))), (max((arr_0 [i_1 + 1] [i_3]), 7)));
                                var_20 = 4416568046125392585;
                                arr_18 [i_0] [i_1] [8] [i_3] [i_6] = (-51 || 32767);
                            }
                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 11;i_7 += 1)
                            {
                                var_21 = ((arr_0 [i_1 + 1] [i_2]) ? 65535 : (arr_14 [i_1 + 1]));
                                arr_22 [i_0] [i_0] = arr_9 [i_1 - 2] [i_1 - 4] [i_1 - 2] [i_3 - 1];
                                var_22 = (((arr_6 [i_0]) < (arr_19 [i_1 - 4] [i_3 - 1] [i_3 - 1] [i_1 - 4] [i_3 - 1] [i_7])));
                                var_23 = (((arr_7 [i_1] [i_1] [i_2 + 1]) ? (arr_12 [i_1] [i_0] [i_2] [3] [i_7 - 1] [i_7 - 2] [11]) : (arr_9 [i_0] [i_0] [i_0] [i_0])));
                            }
                            var_24 = (min(var_24, (((((((arr_5 [i_0] [4]) ? (arr_14 [i_1]) : var_7))) ? ((-((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((max(128, var_3))) ? (-41 || -51) : ((~(arr_11 [i_0] [9] [i_2] [i_3] [i_1] [i_0] [i_3 - 1])))))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-(((-32767 - 1) ? -7594 : 1073741760))));
    var_26 &= ((var_0 <= ((((max(var_0, 2193757492))) ? var_6 : -28142))));
    #pragma endscop
}
