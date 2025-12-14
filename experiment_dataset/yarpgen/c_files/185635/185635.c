/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -7408;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_11 = max(var_4, (((arr_0 [i_2 + 1]) & var_2)));
                    var_12 = (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                    var_13 = (((((arr_2 [i_2 + 1]) >> (-7408 + 7429))) == 833673299));
                    var_14 -= (min(((~(arr_0 [i_2 + 1]))), (!1848)));
                    var_15 = (((((-var_7 & ((var_2 ? var_6 : -5832))))) || ((((arr_3 [i_0] [i_1] [4]) ? -7408 : (arr_3 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = (max(var_16, ((((!var_7) <= (((((arr_8 [16]) ? var_6 : (arr_8 [2]))) - (arr_7 [i_3]))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 -= (max(var_6, (!18)));
                    var_18 = (!58);
                }
            }
        }
        var_19 = (-((-(max((arr_14 [1] [i_3]), (arr_9 [i_3] [i_3]))))));
    }
    #pragma endscop
}
