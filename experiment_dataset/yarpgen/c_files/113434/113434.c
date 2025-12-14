/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((~(((arr_5 [i_0]) ? (min(var_5, 16777215)) : (((-(arr_5 [i_0])))))))))));
                var_14 = (min(var_14, ((((var_8 && (arr_0 [i_0 - 1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_15 = ((((((((arr_10 [i_2] [i_2]) ? var_7 : var_7))) ? ((var_8 ? var_4 : (arr_10 [i_4] [i_2]))) : -var_7)) - (((1319238616 ? -1319238616 : 921792769)))));
                    var_16 = ((((!(arr_7 [i_2]))) ? ((((arr_7 [i_3]) <= var_8))) : (arr_7 [i_2])));
                }
            }
        }
    }
    var_17 = var_5;
    var_18 *= 4278190076;
    #pragma endscop
}
