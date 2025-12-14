/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (!var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (max(10110516010387973044, 8336228063321578572));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 |= ((((~(243 - var_6))) - ((min(var_0, ((var_0 ? var_8 : 40800)))))));
                                var_15 = (((((var_9 ? 23839 : ((var_3 >> (var_6 - 13411654944520744045)))))) - (max(((min(-12, var_9))), (max(var_6, var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
