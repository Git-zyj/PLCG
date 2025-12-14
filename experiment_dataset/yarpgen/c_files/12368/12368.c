/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = ((-1 ? (arr_5 [i_1 + 3] [i_0]) : ((-1 ? 255 : (arr_8 [i_0] [i_0] [i_0] [i_0])))));
                                var_15 = ((((1 >= (arr_5 [i_0] [i_3]))) ? (((arr_5 [i_0] [i_4]) ? var_9 : 2097151)) : (arr_9 [i_1] [i_1 + 2] [i_1 + 3] [i_1] [i_1])));
                                var_16 = (((arr_10 [i_1 + 3] [i_1] [i_2] [i_3]) * (arr_12 [i_1] [i_1 + 1] [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                    var_17 = 13138;
                    var_18 = 249;
                    var_19 += var_8;
                    var_20 = (((((58561 ? -5133631786560207615 : (arr_0 [i_0])))) ? (9 * var_11) : (arr_4 [i_1 + 3] [i_1 - 1])));
                }
            }
        }
        var_21 = 1;
        var_22 = ((31546 ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    var_23 = (min(var_13, (!var_2)));
    var_24 *= var_2;
    var_25 = 5;
    #pragma endscop
}
