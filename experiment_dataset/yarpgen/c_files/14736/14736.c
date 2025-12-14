/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(-7870845123390662545, ((max(var_7, 249)))))) ? 431610267 : ((var_8 ? (var_5 % 55839) : (var_10 == var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((var_8 == ((min((((60 >> (-123 + 137)))), var_6)))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_14 &= min((((arr_5 [i_2] [i_0]) ? 207 : var_12)), ((((arr_5 [i_2 - 1] [i_0]) >= (var_0 >= var_9)))));
                        arr_11 [i_0] [i_1] = var_1;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_15 = (min(var_15, var_10));
                        var_16 = (((((-((min((arr_12 [i_0] [i_0] [i_0] [i_4] [i_4]), 19809)))))) ? ((min((arr_10 [i_4] [i_1] [0] [i_2] [i_2 - 1]), var_3))) : (((max(235932118, 63))))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_1] = 58;
                        var_17 = ((~(((arr_12 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2]) ? (arr_9 [i_1] [i_2 - 1]) : (arr_1 [i_2 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
