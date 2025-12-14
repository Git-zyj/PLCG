/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (var_1 || 79);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = ((-(min((var_10 != var_6), (min(var_0, var_12))))));
                    arr_8 [i_0] [14] [14] [i_0] = var_10;
                }
            }
        }
        arr_9 [i_0] [i_0] = 203;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                var_15 *= var_7;
                var_16 -= (var_12 < -3);
                var_17 += var_12;
                var_18 *= (((var_6 == (var_3 * 0))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_19 += (max(((var_8 / (arr_18 [i_6] [i_4 + 3] [i_4 + 4] [i_4 + 3]))), (((!(var_3 || 2486340169))))));
                            var_20 *= (arr_17 [i_3] [i_3] [i_3] [i_5] [i_5] [i_6]);
                            arr_19 [i_4 + 2] [i_3] = (max(((5262422536767832848 >> (var_4 - 131))), ((max(var_11, var_5)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_21 = ((-(((~var_8) ? var_12 : -27094))));
                    var_22 &= (((33738 + (((-(arr_11 [i_8] [i_8])))))));
                }
            }
        }
    }
    #pragma endscop
}
