/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_11 | ((16823100985824892354 ? var_0 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [8] [8] [i_1] = (((4905285549446263256 ? 66584576 : (arr_0 [i_0 + 1]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 += ((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]) + ((705549316621806132 ? (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]) : (arr_6 [i_0 - 2] [9] [i_3]))))));
                            var_22 = ((((arr_2 [i_3]) != (arr_2 [i_1]))) ? (max((arr_3 [14] [i_0 - 1]), var_12)) : (arr_0 [i_0]));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, (arr_12 [i_0] [i_0] [i_5] [i_6])));
                                var_24 = (min(var_24, (arr_18 [i_0 - 1] [19] [i_0 - 2] [10])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((((max(4220283997, -563470486)) % var_0))) ? var_1 : (((var_8 ? var_19 : (~-95))))));
    var_26 = ((((((var_9 ? 16614 : var_0)))) ? var_9 : var_16));
    #pragma endscop
}
