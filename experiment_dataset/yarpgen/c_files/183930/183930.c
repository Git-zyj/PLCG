/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, -3022987947293293444));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 += ((-((-((36 ? 27913 : 255))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_4] = (((var_6 & (((max(16380, 48)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = (((min(-28575, 65011712))) ? (((-((var_2 ? -29251 : var_7))))) : (((((255 ? 207 : var_8))) ? ((var_2 ? var_7 : var_10)) : (((var_3 ? var_2 : var_0))))));
    #pragma endscop
}
