/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_0] [i_1]);
                                var_17 = -3158972851213866994;
                                var_18 = ((16971 >> (((14256790575298688357 * -1) - 4189953498410863241))));
                            }
                        }
                    }
                    var_19 = ((-(((arr_4 [i_2 + 1] [i_2 - 3]) ^ (arr_4 [i_2 + 1] [i_2 - 2])))));
                    var_20 = (~32767);
                }
            }
        }
    }
    var_21 = 18077867940587738918;
    #pragma endscop
}
