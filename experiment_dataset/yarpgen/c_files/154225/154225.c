/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((4665589546335286524 || -101) ? var_6 : var_0));
    var_12 = (((~var_8) ? ((~((max(var_7, var_0))))) : var_9));
    var_13 = ((155614432 ? 19206 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_7;
                var_14 = (((((((min(var_8, 1260356585087667113))) ? (arr_1 [i_1 + 1]) : (arr_3 [i_1])))) && 63));
                arr_6 [i_1] [i_1] [i_1] = 14336;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [3] [i_2] [i_3] [i_3] [i_1] = ((!(((var_7 ^ ((17186387488621884492 ? (arr_0 [i_0] [i_0]) : 3253575598198233203)))))));
                                var_15 = (!-var_10);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
