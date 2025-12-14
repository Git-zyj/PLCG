/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = min((((-127 <= ((max(101, -122)))))), 127);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 = 171;
                            var_16 = 1;

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_0] [1] [i_0] [i_0] [i_0] [9] = (((((max((8935141660703064064 > 3), var_5)))) / ((min(var_9, var_7)))));
                                arr_15 [i_0] [5] [i_2] [6] [i_2] = ((((126 ? 576460752303422976 : var_9)) + 0));
                                var_17 = (min(var_17, ((-127 - (max(127, -127))))));
                                var_18 = (max(var_18, (((((max((~15171159436772661281), ((max(-124, (arr_5 [i_4] [i_1] [i_0]))))))) || (var_0 ^ var_14))))));
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1)
                            {
                                arr_20 [4] [4] [i_2] [8] [i_5] = ((85 ^ (min(8064, 28))));
                                var_19 = var_0;
                                var_20 = (min((var_10 == -29), (max(0, 171))));
                                arr_21 [i_0] [i_0] [i_0] = ((var_11 ? (((!((max(-122, 85)))))) : (!var_7)));
                                arr_22 [i_0] [i_1] [i_2] [10] [i_3] [i_5] = 255;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(4294967295, (max((~var_10), (!var_0)))));
    #pragma endscop
}
