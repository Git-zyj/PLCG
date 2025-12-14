/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (max(var_8, (max(42432, 12772631774987729977))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_1 [i_0] [i_2]) ? 62009 : (max((max((arr_7 [i_2] [12]), 2147427863)), var_0))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_3] [i_4] = (((max((arr_6 [i_2] [i_3] [i_4]), 4401))) ? ((var_5 ? 1383328017 : 244196179324261240)) : (var_6 / var_3));
                            }
                        }
                    }
                    var_12 = (arr_4 [i_0] [i_1] [i_2]);
                    arr_16 [i_2] = ((5968768550266165984 ? 61 : 18446744073709551606));
                }
            }
        }
    }
    var_13 = (min(var_13, var_9));
    var_14 = (3147225397 < 14751994130878112991);
    var_15 = (max(((((max(195, 18446744073709551606))) ? var_6 : var_7)), (max((31452 | var_6), var_6))));
    #pragma endscop
}
