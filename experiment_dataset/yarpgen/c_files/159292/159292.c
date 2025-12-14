/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((62664 ? (((382517427 ? 382517427 : 185))) : 2073254215));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [21] = ((((((~var_6) ? (arr_5 [i_0] [i_1] [i_0] [i_1]) : ((min(var_7, var_5)))))) ? (((((((arr_0 [i_3]) ? var_7 : var_10)) < 3514081399)))) : (max((arr_5 [i_3 - 2] [i_3 - 1] [i_3 + 2] [i_1]), (arr_7 [i_3 - 1] [i_3 - 4] [14] [i_3 - 2])))));
                            var_18 = ((((max(((-382517427 ? (arr_6 [20] [i_1] [i_1]) : var_7)), (((var_2 == (arr_5 [i_1] [i_1] [i_1] [i_1]))))))) ? (min((arr_7 [i_3 - 3] [7] [i_3 - 4] [i_3 - 4]), ((var_3 ? (arr_8 [i_2]) : (arr_7 [i_2] [i_1] [i_1] [i_3]))))) : -var_6));
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_1] = arr_3 [i_0] [i_0] [i_1];
            }
        }
    }
    var_19 = ((~(((!(~-382517432))))));
    #pragma endscop
}
