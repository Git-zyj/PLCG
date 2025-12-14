/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(var_3, var_11)) & 174));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((((((((82 ? 198 : 36787))) ? var_6 : var_12))) ? (var_2 & var_14) : ((var_11 + ((var_4 ? var_7 : 174))))));
                arr_6 [i_0] [i_1] = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (82 << var_6);
                            arr_14 [13] [i_0] [i_0] [i_2] [i_2] [i_3] = ((var_9 ? var_1 : 174));
                            arr_15 [4] = (max(var_5, 6873154289135571696));
                            var_18 = (min(var_18, (((var_5 ? ((var_8 ? 185 : 70)) : (((!(((82 ? 71 : 185)))))))))));
                            arr_16 [i_0] [i_1] [i_1] [6] [i_2] [i_3] = ((((!(((82 << (124 - 108)))))) ? ((var_11 ? ((170 ? 71 : 70)) : -125)) : var_0));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min((var_3 / var_8), var_0));
    #pragma endscop
}
