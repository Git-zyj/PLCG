/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_1 ? (255 | var_5) : var_11))) & ((~(~4120732343)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (!1213576407347531193)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_12 [i_0] [i_0] [i_0 - 1] [i_1 - 3] [i_0])));
                                var_20 = 26931;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 -= var_13;
    var_22 += ((((((var_2 + var_16) != var_2))) + -1));
    #pragma endscop
}
