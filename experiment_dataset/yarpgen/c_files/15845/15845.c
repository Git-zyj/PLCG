/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0 + 1] [i_1] = (arr_7 [i_0] [i_0] [i_0 + 1] [i_0]);
                    var_14 = (((arr_4 [i_0 + 1]) > (arr_2 [i_0 - 1] [13])));
                    var_15 = (((-(arr_6 [i_0 + 1] [i_2 + 1] [i_2 - 2]))));
                    var_16 = 6750;
                    var_17 = ((var_9 || (((((max(var_10, var_7))) ? (arr_4 [i_0 - 1]) : (var_0 & 15))))));
                }

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_18 = (max((!var_6), -461429119));
                    var_19 = (((((arr_10 [i_0 + 1]) * (!var_8))) / var_5));
                    arr_11 [i_0] [17] [17] = ((70 ? var_3 : (((arr_10 [i_0 + 1]) ? 45 : 1))));
                }
                arr_12 [i_0 + 1] = (!35757);
            }
        }
    }
    #pragma endscop
}
