/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = ((234 >= ((min((min(var_11, -20)), (max(57, 1)))))));
                            var_14 = ((+(((((arr_1 [i_0]) ? 13532398479776962950 : var_1)) + (((min(-1, (arr_0 [i_0])))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_15 = (max(var_15, 1));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 ^= min((min((arr_1 [i_0]), ((6339155430998798662 | (arr_8 [i_0] [i_0] [i_0]))))), var_3);
                                var_17 += ((~(min((arr_13 [i_0] [i_4] [i_5 - 4] [i_5 - 3] [i_6 + 1]), ((2124 ? var_0 : 12107588642710752953))))));
                                var_18 = ((((((((-1 + 2147483647) >> (((arr_10 [i_6] [i_5] [i_4]) - 37))))) ? (max((arr_13 [i_0] [i_1] [i_4] [i_5 - 1] [i_6 - 2]), 1)) : var_10))) ? (max(((min((arr_7 [i_0] [i_1] [i_4]), 44))), 6339155430998798662)) : (~var_7));
                                arr_15 [i_0] [i_1] [i_5] [i_5] [i_6] = -54;
                            }
                        }
                    }
                    var_19 = 18446744073709551615;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_20 += (((min(2147483647, 17))) ? (max(26, 0)) : (((min(255, 131)))));
                                var_21 = (min(var_21, ((min((max((arr_0 [i_7 + 1]), 9072873994281121402)), (1653186281 % var_12))))));
                                var_22 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_23 = ((~((max(var_12, (arr_4 [i_1] [i_8] [i_4] [i_7 + 2]))))));
                                var_24 = (min(var_24, 17742971481099376465));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_7;
    var_26 = (max(var_26, ((min(33, -264793664358976025)))));
    #pragma endscop
}
