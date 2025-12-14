/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-16 ? var_2 : ((max((1 != 4375540806820572352), 9928)))));
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (~0);
                var_20 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (~62772);
                                var_22 = (max(var_22, 32767));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
