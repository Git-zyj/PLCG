/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(445, ((((var_6 >= var_0) >= var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(0, 268434432));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_0] = (var_1 ? (((((((~(arr_4 [i_3])))) <= ((2081991546 ? 13969100142873740839 : -749617292)))))) : ((((((!(arr_9 [i_1]))))) * var_4)));
                                var_20 = ((((((arr_11 [i_0] [i_2] [i_4] [i_3] [i_2] [i_1]) | (((~(arr_2 [i_0]))))))) ? var_8 : (((~(~var_10))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
