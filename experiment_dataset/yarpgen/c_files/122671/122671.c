/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((((min(-82, (var_11 || var_11))))) + (965969221 ^ 1350531987411600918))))));
                                var_21 = (((((((min(56, -31460))) ^ (9437957343529594799 != -29037)))) && (((((73 ? var_9 : 2664631235)) >> (12479 - 12467))))));
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((var_2 << (-74 + 123)));
                    arr_12 [i_2 + 3] [i_1] = 11921;
                }
            }
        }
    }
    var_22 = var_13;
    var_23 = var_15;
    var_24 = (max(var_24, var_14));
    #pragma endscop
}
