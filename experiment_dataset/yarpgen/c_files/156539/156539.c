/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((!(((-9819557 ? var_12 : 9819558)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((~-30338) ? ((~(arr_8 [i_2 + 1]))) : (~-9819557))))));
                                var_19 = ((23177 ? (!var_8) : (((!(arr_14 [i_2 + 1] [i_3 - 1] [i_2] [i_3] [i_4] [i_1] [i_0]))))));
                                var_20 &= (~(~var_17));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_0] = ((-(((!(arr_1 [i_0]))))));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
