/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (min((min((max((arr_3 [i_0 - 1] [i_1]), var_3)), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), var_2));
                    arr_10 [i_2] [i_1] &= (((((arr_6 [i_0 - 1] [i_1] [i_2] [i_0 - 1]) >= ((26832 ? var_4 : (arr_6 [i_0 - 1] [i_1] [i_0 - 1] [8]))))) ? (var_6 || 174) : ((1 ? var_10 : (arr_6 [i_2] [i_0 - 1] [i_2] [i_0 - 1])))));
                }
            }
        }
    }
    var_13 = ((min(var_2, 12766556723212455418)));
    var_14 = 2116041764;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_15 = ((~((((arr_25 [i_3] [i_5] [i_4] [7] [i_7]) < var_1)))));
                                arr_30 [i_5] [7] [i_7] = (arr_14 [i_3]);
                                var_16 = (((arr_17 [i_6] [i_4] [i_3]) < -var_7));
                                arr_31 [i_5] [i_4] [4] [i_6] [11] [i_5] [i_7] = max(var_9, ((((((max(256, var_10)))) <= (arr_26 [13] [13] [13] [14] [13])))));
                            }
                        }
                    }
                    arr_32 [2] [i_3] [i_5] [i_5] = 38703;
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_17 ^= var_3;
                                arr_38 [i_5] [i_5] = var_7;
                                arr_39 [i_3] [i_4] [i_5] [i_8] [i_4] [i_8] [i_9 - 1] = ((~(((7583290060305205502 & var_6) ? (~0) : (min((arr_19 [i_5] [i_5]), (arr_12 [i_9])))))));
                                var_18 ^= var_12;
                                var_19 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
