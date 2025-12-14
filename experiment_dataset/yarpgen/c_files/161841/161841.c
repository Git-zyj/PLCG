/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_3;
    var_14 = min(var_3, (((((var_1 ? var_6 : var_5))) ? (min(11, 65535)) : ((var_0 ? var_1 : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (min(((var_9 ? -1 : (arr_5 [i_0] [i_1 - 1] [i_4 + 1] [i_2 - 1]))), (((9 ? var_1 : 29013)))));
                                arr_10 [i_0] [i_0] [i_2] [i_3] [2] [i_0] = (((((((((arr_3 [i_1] [i_1] [i_1]) ? var_10 : 126))) ? 129 : (max((arr_7 [i_4] [i_3] [3] [3]), -31954))))) ? 2379632080 : ((((min(2659663092, var_12))) ? var_7 : (max(var_6, 3932160))))));
                            }
                        }
                    }
                    arr_11 [7] [2] = arr_6 [i_0] [i_1] [i_1] [i_1] [i_0];
                }
            }
        }
    }
    #pragma endscop
}
