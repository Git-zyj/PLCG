/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((var_0 != (!2634528529))) ? var_8 : ((((~var_12) && 148)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 *= (arr_6 [i_0] [i_2]);
                    arr_7 [i_1] = (((arr_5 [i_1]) | 64));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = ((~((((arr_9 [i_1]) != (arr_9 [i_1]))))));
                                var_16 = ((!(~56134)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = 4294967295;
    #pragma endscop
}
