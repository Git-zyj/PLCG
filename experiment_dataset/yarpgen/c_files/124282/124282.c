/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (arr_9 [10] [i_1] [i_1] [i_3] [i_1] [i_0]);
                            var_17 = (!52181);
                            var_18 = 2697812864;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_19 = (arr_6 [i_4]);
                            var_20 = (min(var_20, (((!(arr_5 [i_5] [i_4]))))));
                            var_21 = (arr_5 [11] [i_4]);
                            arr_16 [6] [i_1] [4] [i_1] = ((!(!32747)));
                            var_22 -= (arr_4 [i_0]);
                        }
                    }
                }
                var_23 = (arr_10 [i_0] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_0] = var_5;
                            var_24 = (min(var_24, (~var_6)));
                        }
                    }
                }
            }
        }
    }
    var_25 = (~9126679734945856338);
    var_26 = var_9;
    #pragma endscop
}
