/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_20 = (65535 ? var_9 : (min(var_2, ((var_3 ? var_17 : 65524)))));
                            var_21 = (min(var_21, (((var_6 > (max((var_0 + var_16), var_2)))))));
                            arr_12 [i_2] [i_1] [i_2] = ((+(((arr_6 [i_4 + 2] [i_4 + 2]) ? var_19 : (arr_11 [i_4 + 2] [i_1] [i_3 - 2] [i_1] [i_4 - 2] [i_1 - 3])))));
                        }
                        var_22 = ((var_8 - ((((var_8 ? var_10 : 15))))));
                        var_23 = var_7;
                    }
                    var_24 -= min((((((4294967278 ? 11 : 20))) ? 25 : (arr_11 [i_0] [i_1 + 3] [i_2] [i_2 + 1] [i_1 + 3] [i_0]))), (((-108 ? -121 : 23))));
                    arr_13 [i_0] [i_1 - 2] [i_2] = (min(var_6, var_11));
                }
            }
        }
    }
    var_25 -= ((!((min(-125, -65529)))));
    #pragma endscop
}
