/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((!(arr_2 [i_1 - 1] [0] [i_1 + 1])))));
                arr_5 [i_1] [i_1] = ((((((max(var_2, var_19)) >> (((arr_3 [i_1 + 2] [i_1 + 1]) - 13374472238416944007))))) ? (!0) : -4294967293));
                var_20 = (max(var_20, (arr_1 [i_0] [0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1 + 2] [13] [i_1] [i_2] [i_1 + 2] = var_10;
                            arr_12 [i_1 + 2] [i_2] = ((var_4 ? ((9060580207173757432 ? (!-11) : 8083074833753846641)) : 166));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
