/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_8 [6] [i_2] [i_2] [i_0] [i_0] = ((!((min(-var_2, (((arr_6 [i_2] [i_2] [i_1] [i_2]) ? var_4 : (arr_5 [i_2] [i_2] [i_0] [i_2]))))))));
                            var_12 -= ((-(min(-4246, (arr_0 [6] [i_1])))));

                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_13 ^= (((4246 | -4245) ? (arr_1 [i_3]) : ((-((4246 ? 0 : 473819234))))));
                                var_14 = (min(var_14, ((min(-473819238, 1)))));
                            }

                            for (int i_5 = 4; i_5 < 20;i_5 += 1)
                            {
                                var_15 = (max(var_15, ((((arr_7 [i_0] [i_0] [i_1]) ? ((-106 | ((min(4231, 59))))) : (arr_5 [i_1 - 2] [i_5 - 4] [i_5] [i_3]))))));
                                arr_13 [i_0] [i_0] [i_2] [3] [5] [i_3 - 2] [i_5 - 2] = (((((((var_0 ? var_1 : 100))) ? (min(-473819212, 197)) : (arr_6 [i_2] [i_0] [i_2] [i_0]))) <= var_1));
                                var_16 = (var_4 < var_4);
                                var_17 ^= var_1;
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_18 -= (arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_6] [i_6]);
                                arr_17 [i_0] [7] [i_1 - 3] [i_2] [i_3] [i_2] = var_9;
                            }
                            arr_18 [i_0] [i_0] |= ((9223372036854775807 ? -3606 : 596495329));
                        }
                    }
                }
                arr_19 [i_0] = 4246;
                arr_20 [i_1] [i_1] |= (min(12353, ((min(24492, 32754)))));
            }
        }
    }
    var_19 -= var_3;
    var_20 = -var_10;
    var_21 = var_6;
    #pragma endscop
}
