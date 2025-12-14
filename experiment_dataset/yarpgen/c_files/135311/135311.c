/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (~var_6);
                arr_6 [i_0] [i_1] [i_0] &= (((!(!11))));
                var_21 = 32;
                arr_7 [i_1] = 4294967286;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_22 = var_14;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [10] [15] [i_5] [i_6] [i_6] &= (((~24) ? (((~(~var_9)))) : (~var_10)));
                                var_23 = 14845;
                                var_24 += (3982348330 < var_0);
                                arr_23 [i_2] [i_3] [2] [i_5] [i_5] [i_6] = (!14855);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
