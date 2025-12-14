/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_2 ? (((((var_9 ? var_6 : var_11))))) : 31851));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] [i_1] = var_6;
                                arr_17 [i_0] [i_0] = (((0 ? (arr_5 [i_0] [i_0]) : 48460)));
                            }
                        }
                    }
                    var_13 = ((((min(var_9, (arr_2 [i_0])))) ? (((~(-127 - 1)))) : (max((-127 - 1), (arr_12 [i_1] [i_1] [i_2] [i_0])))));
                    arr_18 [i_2] [i_1] [i_0] |= var_6;
                }
            }
        }
    }
    var_14 = ((-(-127 - 1)));
    var_15 = var_3;
    #pragma endscop
}
