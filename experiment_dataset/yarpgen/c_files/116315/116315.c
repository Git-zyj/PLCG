/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((117440512 ? 29049 : 121));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = ((((max((max(190, 2147483648)), var_13))) ? (max((arr_3 [i_1 + 3]), (arr_3 [i_1 - 1]))) : (arr_4 [i_1])));
                arr_6 [i_1] = (arr_4 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? ((((((((arr_8 [i_0] [i_1 - 2] [i_2 + 4] [i_1]) + 9223372036854775807)) >> (196608 - 196571))) < ((((arr_9 [i_1] [i_0] [i_2 + 2] [i_2 + 2]) / (arr_9 [i_1] [i_0] [i_2 + 2] [i_3]))))))) : ((((((((((arr_8 [i_0] [i_1 - 2] [i_2 + 4] [i_1]) - 9223372036854775807)) + 9223372036854775807)) >> (196608 - 196571))) < ((((arr_9 [i_1] [i_0] [i_2 + 2] [i_2 + 2]) / (arr_9 [i_1] [i_0] [i_2 + 2] [i_3])))))));
                            arr_12 [i_1] [2] [i_3] |= (max((((max((arr_9 [2] [i_1 + 1] [i_2] [i_3]), (arr_0 [i_3]))) < (arr_5 [2]))), (-890853042745204219 < -9223372036854775798)));
                            var_18 = ((~((14866017658172153541 >> (((-2147483635 - -2147483599) + 52))))));
                            arr_13 [i_0] [i_1 + 2] [i_1] = (94 >= 5511261242692921194);

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_19 &= ((1152921504606846976 ? (max(3444086185, (((-8076 <= (arr_14 [i_0] [i_1] [i_2 - 1] [i_1] [i_1])))))) : 189392696));
                                var_20 = (((arr_3 [i_1 - 1]) < (arr_5 [i_1])));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_18 [i_1] [i_1] [i_1] [2] [i_3] [9] [i_5] = ((min((arr_8 [2] [2] [i_2] [i_1]), ((min(var_10, 4294836224))))));
                                arr_19 [4] [4] [i_5] [4] [i_5] |= (max((((arr_9 [i_5] [i_0] [i_1 + 3] [i_2 + 3]) * (arr_9 [i_5] [i_1] [i_1 + 3] [i_2 - 1]))), 252));
                                arr_20 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] = (min((arr_1 [i_1 - 1]), ((var_9 % (arr_1 [i_1 - 3])))));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_21 = (((((arr_21 [i_1]) || (((arr_22 [i_1 - 3] [3] [i_1]) || (arr_22 [i_0] [i_2] [i_1]))))) || 52));
                                var_22 = 145;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
