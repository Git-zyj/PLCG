/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_11));
    var_13 = ((((-1415997345 & 18) << ((((var_10 ? var_2 : -1804022158)) - 233)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min((((arr_5 [i_0] [i_1] [i_2]) && (((arr_6 [i_0] [i_0] [6] [i_0]) != var_0)))), ((!(((arr_1 [i_0] [i_1]) && (arr_4 [i_0] [i_1] [8])))))));
                    var_15 = ((((!(arr_3 [i_0]))) || (arr_5 [i_2] [i_1 - 1] [i_0])));

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((49 ? ((-(arr_8 [i_3 - 1] [i_2] [i_2 + 1] [i_2] [i_2]))) : (((!(!192))))));
                        var_16 += (((((arr_5 [i_3] [i_3] [i_2 + 1]) ? (arr_7 [i_2] [i_2] [i_3 - 4] [i_2] [i_2] [i_2 - 2]) : var_8)) < (arr_0 [i_2 + 2] [1])));
                    }
                    var_17 *= (((~var_9) ? (~237) : 255));
                    var_18 = (arr_5 [i_1] [i_2 - 1] [i_2 - 1]);
                }
            }
        }
    }
    var_19 = var_10;
    var_20 = var_8;
    #pragma endscop
}
