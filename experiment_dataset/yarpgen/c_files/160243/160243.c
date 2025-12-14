/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_15 = (max(var_15, (arr_7 [i_2 - 3] [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_16 = (!(~32));
                                arr_15 [i_0] [i_1] [i_3] [i_3 - 1] [i_4] |= -var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_0] [1] = ((!(!3663157019)));
                                arr_23 [i_0] [0] [i_2 - 2] [i_2] [i_2 - 3] [i_2] = ((!(~-1865304723)));
                                var_17 = 1226263796;
                            }
                        }
                    }
                }
                arr_24 [i_0] = (!-12);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_18 = ((!(((~(arr_10 [i_7] [i_7 - 1] [i_7] [i_7 - 1]))))));
                            var_19 = ((-((~(~-12)))));
                        }
                    }
                }
                var_20 ^= (~-var_8);
            }
        }
    }
    var_21 = (max(var_21, (!var_9)));
    var_22 = ((!(~var_8)));
    var_23 = var_13;
    var_24 = var_12;
    #pragma endscop
}
