/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((12072949053857357762 ? 99126523639710759 : 7068309655770578092));
    var_16 = (448683171 / ((var_1 ? ((var_9 ? var_7 : var_1)) : 454186811)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_11, (((!(((var_4 ? var_4 : var_12))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_1] [i_3] = (((max(-673197092, 9))) ? (((arr_6 [i_1 - 1] [i_2] [i_3 - 1]) - (arr_5 [i_1 + 1] [i_1 - 3]))) : ((((2147467264 == var_3) ? var_4 : (arr_2 [i_0])))));
                        arr_12 [i_3] [i_3] [14] [i_3] = var_11;
                        var_17 ^= (((var_13 >= var_9) ? (!var_5) : (arr_8 [i_1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
