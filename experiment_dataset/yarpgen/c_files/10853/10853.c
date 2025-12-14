/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = 65535;
    var_12 = ((((((min(1, 3558540058354446550))) && 2032)) ? 65521 : 65516));
    var_13 = (min(var_13, ((min((65527 || 27), (27 || 14383))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 2] [i_0] [i_2] [i_3] [i_3] = (max((-644851241 & var_6), (var_9 & var_8)));
                                var_14 *= 14371;
                                var_15 = (max((min((var_4 - 343563145), 3545313435)), var_7));
                            }
                        }
                    }
                    var_16 -= (max(644851240, (var_7 / var_5)));
                }
            }
        }
    }
    #pragma endscop
}
