/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(255, var_8));
    var_18 = min((~1494323774), ((1494323774 + (((min(var_16, var_10)))))));
    var_19 = (min(((max((min(2800643522, var_14)), ((min(var_2, var_0)))))), -9223372036854775793));
    var_20 = (max(var_20, ((min(var_10, (--8437789507746590986))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [18] [i_1] [i_1] [i_2] [i_2] [i_3] = (((~8437789507746590986) & (min(var_4, var_16))));
                            var_21 = 1494323767;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, 2046));
                            arr_18 [i_0] [i_1] [i_1] [i_0] = var_15;
                            arr_19 [i_0] [14] [i_4] [14] [i_0] = var_16;
                            var_23 = ((-(!1494323759)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
