/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = 56;

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = var_0;
                                var_18 = ((((!((max(-34, var_5))))) || (((arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) && (arr_9 [i_3 - 3] [i_2 - 1] [i_1] [i_1 + 1] [i_0 + 2])))));
                                var_19 = (3967981817 < -94252532);
                                var_20 = (((((97 ? 1 : ((var_6 & (arr_8 [i_0 + 2] [i_4] [i_0 + 2] [i_3])))))) ? -914714462 : (~var_3)));
                            }
                            for (int i_5 = 1; i_5 < 13;i_5 += 1)
                            {
                                var_21 = ((~(((arr_2 [i_0 - 1]) - 604901300))));
                                var_22 -= (((~((max(var_13, 10396))))));
                                arr_18 [i_5 + 1] [i_5] [i_0] [i_2 + 1] [i_0] [i_1] [i_0] = min(0, ((max(-115, (arr_3 [i_0 - 1])))));
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (45 ? (((max(63, 1)))) : (((arr_19 [i_6 + 4] [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1]) ? 2875037860 : (arr_2 [i_2 + 1]))));
                                var_23 += (((!var_7) ? (((arr_4 [i_2 + 1]) ? -var_5 : ((((arr_11 [i_3 - 3] [i_3 - 3] [i_2 - 1] [i_3] [i_6 - 1] [i_1] [i_6 + 4]) ? 65535 : (arr_8 [i_6] [i_6] [i_6] [i_6 - 1])))))) : ((((44827 ^ 45) ? ((max(5, -44))) : 21400)))));
                                arr_23 [13] [i_1 + 1] [i_2 - 1] [i_3 - 3] [i_0] = ((!(((var_10 ? -73 : ((var_14 ? 1 : (arr_7 [i_0]))))))));
                            }
                            var_24 = (max((arr_8 [i_0 + 1] [i_3] [i_3] [i_0 + 2]), (arr_6 [i_0] [i_0] [i_0 - 2] [i_0 - 2])));
                        }
                    }
                }
                var_25 *= (((~182) ? (arr_5 [4]) : (max((arr_17 [i_0 + 1] [i_0 + 1]), var_11))));
                var_26 = ((~((((min(-1150699863, -71))) ? ((var_13 ? 193 : 2780412248)) : (((3184439386 ? (arr_12 [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_1]) : -1693633236)))))));
            }
        }
    }
    var_27 = 0;
    var_28 = max(-var_3, (((((0 ? var_11 : 1))) ? (((var_8 ? var_6 : -47))) : var_3)));
    var_29 = (max(var_29, ((((~var_2) ^ ((64715 ? 0 : 0)))))));
    #pragma endscop
}
