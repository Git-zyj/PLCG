/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_4));
    var_18 = (+(min((4294967295 | var_14), var_4)));
    var_19 |= -0;
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (((arr_4 [i_4 - 1] [i_1 + 1]) | ((-(arr_2 [i_4 - 1])))));
                                var_22 += var_6;
                                var_23 = ((+((max((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1]), var_11)))));
                            }
                        }
                    }
                    var_24 += (((1 ? 4294967271 : 6)));
                }
            }
        }
    }
    #pragma endscop
}
