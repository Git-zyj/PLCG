/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((var_1 && ((min(var_11, ((max(var_4, var_5))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] = ((var_0 << (((max(var_8, var_6)) - 2833053776438546531))));
                                var_15 = var_6;
                                var_16 = ((max((max(var_12, var_8)), ((max(1558119561, 22786))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = max(var_3, var_6);
            }
        }
    }
    #pragma endscop
}
