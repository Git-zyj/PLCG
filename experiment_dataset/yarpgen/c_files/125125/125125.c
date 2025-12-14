/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 / (var_6 * var_11)));
    var_14 = (min(((var_12 ? 255 : var_2)), (~var_6)));
    var_15 = var_9;
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((675974374 ? (max((arr_1 [i_0 - 2]), ((var_10 ? var_7 : var_3)))) : 4502500115742720));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 += ((~((((((arr_3 [3]) % 3878764209778324248))) ? (~var_0) : (((~(arr_7 [i_0 + 1] [i_1]))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((((min((max(var_3, var_10)), (arr_3 [i_0 - 3])))) ? ((((arr_0 [i_0 - 3]) <= (arr_0 [i_0 + 1])))) : 35));
                                arr_14 [i_1] [i_2 + 1] [i_3] [i_4] = ((((((min(14567979863931227369, 33269)) >> (14567979863931227369 >= 16090)))) ? ((var_5 ? (arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_2 + 2] [i_2 + 2]) : (arr_2 [i_0 - 2]))) : ((var_10 & (arr_2 [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
