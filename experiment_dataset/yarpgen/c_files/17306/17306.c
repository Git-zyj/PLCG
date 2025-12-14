/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((var_7 ? var_10 : var_10))) ? var_11 : ((var_0 ? var_8 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(((((max(var_3, var_10))) ? var_5 : (arr_0 [0]))), ((((((arr_3 [i_1] [i_0]) ? var_4 : var_5))) ? (min(var_2, var_1)) : ((var_10 ? var_4 : (arr_3 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((~(min(((var_9 ? (arr_8 [i_2] [i_2]) : var_3)), ((max(var_5, var_8)))))));
                            var_14 = var_1;

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = (((arr_9 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1]) | (arr_14 [i_4 - 2] [15] [i_4 - 2] [i_4 - 2] [i_1])));
                                var_15 -= (((var_11 ? var_7 : (arr_6 [i_0] [i_2] [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 &= max((((~var_9) ? (var_7 >= var_7) : var_0)), ((((((var_4 ? var_5 : var_9))) || (((var_7 ? var_4 : var_7)))))));
    var_17 = ((var_3 ? var_1 : var_6));
    var_18 += (max(((max(var_3, var_4))), var_5));
    #pragma endscop
}
