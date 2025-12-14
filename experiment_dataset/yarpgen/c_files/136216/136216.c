/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((min(var_7, var_10), var_10))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 += var_2;
                                var_19 = 284642057;
                                var_20 += 16546;
                            }
                        }
                    }
                }
                arr_14 [i_0] = (arr_3 [i_0] [5] [i_0]);
                arr_15 [i_0] [i_1] [i_0] = ((1 ? (arr_3 [i_0 - 3] [i_1 - 1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_21 = (min(17200809906734371469, 16893072299269973534));
    var_22 = ((+(((~var_0) ? var_3 : ((1360107180 << (127 - 116)))))));
    #pragma endscop
}
