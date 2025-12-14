/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((~var_6), ((min((~-4321375618194529348), var_3))));
    var_17 = (min(var_3, 97));
    var_18 = (min(var_11, (max((var_4 & var_9), (~14)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((((!(arr_0 [i_0]))) && (arr_8 [17] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = (((((arr_3 [19] [13] [13]) + 12603092271799507731))));
                                arr_14 [i_0] [i_1] [8] [i_3] [i_4] [1] [i_0] = ((94 << ((((min(-95, 91))) + 99))));
                                arr_15 [i_0 - 1] [i_0] = (~88);
                            }
                        }
                    }
                    var_20 = (min(73808077624024340, 60212));
                }
            }
        }
    }
    #pragma endscop
}
