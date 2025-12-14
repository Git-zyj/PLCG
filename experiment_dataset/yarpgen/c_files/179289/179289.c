/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((!((max((((var_16 ? 1 : -20))), 7429324795113325926)))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2] = ((((((!0) - var_10))) ? ((-1509593060 ? 19 : -1509593088)) : ((((arr_0 [i_3] [i_3]) ? var_2 : (((arr_11 [3] [i_1] [i_2] [i_3]) ? 20 : var_6)))))));
                        var_17 = (((((((1509593030 ? var_9 : var_3))) ? (((arr_9 [i_0] [1] [i_2] [i_2]) ? 1509593059 : -6901)) : (arr_3 [i_1 - 1] [i_1 - 1]))) ^ ((-1509593088 ? ((min(0, 29))) : ((0 ? (-127 - 1) : -1509593088))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_18 = 4;
                        var_19 = (min(var_19, (((59501 ? -15 : 1)))));
                        var_20 = (-104 < -36);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_21 = var_10;
                        arr_20 [i_0] [i_2] = 120;
                    }
                    var_22 = ((+((721785212090868343 ? (!var_16) : (arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    var_23 = ((((max(((var_8 + (arr_9 [3] [i_0] [4] [i_2]))), ((var_0 ? 1509593088 : var_7))))) ? ((-((-20 ? 135 : (arr_14 [i_0] [i_0] [6] [i_0]))))) : var_8));
                }
            }
        }
    }
    var_24 = -92;
    #pragma endscop
}
