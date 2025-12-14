/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((max((arr_9 [i_3] [i_4 + 1] [i_2] [4] [i_3] [0]), var_12))) << (((var_17 + 4142) - 14)))))));
                                var_21 = (min(var_21, (((var_2 ? (arr_10 [i_2 + 1] [i_4 + 1]) : ((((!(!77))))))))));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, (((+((var_15 ? (arr_3 [6]) : var_17)))))));
                arr_14 [i_0] = ((-((((min(var_5, 18273))) ? (arr_12 [i_0] [i_0] [i_0] [i_1] [4] [i_1] [3]) : (((arr_5 [i_1]) ? 2901625207 : 21315))))));
            }
        }
    }
    var_23 = ((!(((((max(var_4, var_14))) ? (max(var_4, var_19)) : (var_7 / var_8))))));
    #pragma endscop
}
