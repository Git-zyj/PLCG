/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [14] = ((((max((arr_4 [i_2 + 1] [i_0 + 3]), var_11))) && var_0));
                            var_13 = ((~(arr_7 [i_0] [i_0] [i_0])));
                            var_14 = 144;
                            var_15 = (!32760);
                        }
                    }
                }
                var_16 = 3444692123786965228;
            }
        }
    }
    var_17 *= ((((~((var_11 ? var_8 : var_12)))) == var_9));
    var_18 = ((~(((1912106563 | var_7) ? (((max(-119, 108)))) : var_1))));
    #pragma endscop
}
