/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((var_15 << (((~106) + 125))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((((!(var_1 || 115))) && (((!var_15) || (115 && 4294967295)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [5] [i_3] [i_1] [i_3] [i_0] = ((((((!(!7513581468490389862))))) + var_0));
                                var_19 ^= -1079815456;
                                var_20 = (~140);
                            }
                        }
                    }
                    var_21 = (101 / var_4);
                    var_22 = (((((11 | var_8) * var_8)) + 2494));
                }
            }
        }
    }
    var_23 = var_14;
    var_24 = 101;
    #pragma endscop
}
