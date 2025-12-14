/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= 65520;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = ((((min(58777, 65520))) << (-59347351233874680 > 65520)));
                                var_20 = (max(var_20, var_13));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = (((((((arr_6 [i_2]) > (min(59347351233874679, 17)))))) % (max(var_4, (167 & var_7)))));
                                arr_17 [i_0] [1] [i_0] = (((65535 * var_2) || 57));
                                var_21 |= ((((var_1 ? var_5 : -59347351233874680)) | var_17));
                            }
                        }
                    }
                    var_22 = 33554368;
                }
            }
        }
    }
    var_23 = ((var_17 | (0 < -33554368)));
    #pragma endscop
}
