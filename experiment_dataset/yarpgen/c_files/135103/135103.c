/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 ^= ((((min((max(-889264736, 181)), (~var_13)))) == ((6080099562544380994 ? ((~(arr_0 [i_2] [i_2]))) : (min((arr_0 [i_2] [i_1]), (arr_1 [6])))))));
                                var_20 = (min((((~-889264739) > var_13)), (max((!-22025), (255 != var_12)))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, ((((~(arr_10 [i_0])))))));
                var_22 += var_2;
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
