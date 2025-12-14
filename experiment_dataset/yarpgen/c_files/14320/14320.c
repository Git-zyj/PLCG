/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = ((((~10881799384865196209) ? (arr_3 [i_0] [i_1]) : (arr_2 [7]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = ((!(((~(arr_3 [i_2] [i_1]))))));
                            arr_9 [i_3] = (((10881799384865196209 & 14189575483644903514) > (((var_0 ? (arr_4 [i_2 + 1] [i_1 + 1] [i_2] [i_3]) : var_1)))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(8994, 107));
    var_20 = (((((~((var_11 ? var_15 : var_1))))) ? var_4 : 25881));
    #pragma endscop
}
