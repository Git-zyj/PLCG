/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156347
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
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [16] [i_2] [12] |= (arr_2 [i_0] [14]);

                            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                var_18 = (((max((max(var_0, 14423804211077053128)), (arr_7 [i_2 - 1] [i_4] [i_4])))) ? ((+(((arr_6 [9] [i_2 + 1] [i_1]) ^ 4022939862632498488)))) : var_12);
                                var_19 = (min(-31163, ((+(((arr_1 [i_3] [i_1]) / var_12))))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                var_20 -= var_4;
                                var_21 ^= (((arr_5 [i_0] [6] [i_5]) ? var_6 : (arr_6 [i_0] [19] [i_0])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = (arr_12 [i_0] [i_2 - 2] [i_1] [i_3] [i_5]);
                                var_22 += (min(((((min((arr_8 [i_0]), 31156)) < (arr_13 [i_1] [i_2] [i_3] [10])))), ((((min(-31165, -1310957453))) ? 4022939862632498476 : -952643371))));
                                arr_16 [i_0] [i_1] [i_2 - 2] [i_1] [i_5] = (min(1048064, 14423804211077053127));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_23 += ((((4022939862632498476 ? (arr_13 [i_0] [i_0] [i_2 - 2] [14]) : var_5)) == (((arr_12 [i_2 - 3] [i_3] [18] [i_3] [i_6]) ? -1077813262 : 31150))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = arr_1 [i_3] [i_6];
                            }
                        }
                    }
                }
                var_24 = -81870080;
                var_25 ^= (((arr_5 [i_0] [18] [i_0]) <= -31150));
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
