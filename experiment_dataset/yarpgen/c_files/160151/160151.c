/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 734550102;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((var_12 ? ((3560417194 ? (!1189800132) : 1418872272)) : ((-(min(var_17, 3927532927))))))));
                                var_21 = ((((arr_14 [i_0] [i_1] [i_2]) - (arr_10 [i_0] [i_0] [i_0]))) + 734550102);
                                arr_15 [i_0] [i_1] [i_3] [i_0] = 2515046074;
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (arr_12 [i_1] [i_1] [i_0] [i_0] [i_0] [5])));
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
