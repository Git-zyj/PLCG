/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(((0 ? 0 : 127)), var_9)) | 23175));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 127;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = ((((min((arr_7 [i_2] [i_2] [i_2]), (var_9 ^ 8)))) != (max(var_11, (min(var_3, (arr_0 [17])))))));
                                arr_14 [i_2] = -31262;
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = (((~42360) & var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
