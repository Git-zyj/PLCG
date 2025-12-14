/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (min(var_10, var_3));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 *= (((arr_1 [i_0]) ? (arr_2 [i_2]) : (arr_4 [i_0] [i_0] [i_0])));
                        var_12 = (min(var_12, (((var_9 <= (arr_4 [i_1 + 3] [i_1 + 1] [i_1 + 3]))))));

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_13 = ((0 == (arr_4 [i_1 + 1] [i_3 + 2] [i_4 - 1])));
                            var_14 = (max(var_14, ((((arr_8 [i_1 + 2] [i_3 + 1]) && (arr_5 [i_1 + 1] [i_3 + 1] [i_4 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = (((var_3 + 183) ? (((arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [9] [i_5]) ? var_9 : (arr_11 [i_0] [1] [i_2] [i_3] [8]))) : (arr_10 [i_2])));
                            arr_16 [i_1] [i_5] [i_5] [i_3] [i_5] |= (((arr_13 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1]) ? -123 : 122));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((1 ? var_9 : ((var_2 ? var_7 : var_7))))) / (min((max(var_7, -2365556553274464611)), var_5))));
    var_16 = ((((var_6 ? var_4 : var_5))));
    var_17 = -71;
    #pragma endscop
}
