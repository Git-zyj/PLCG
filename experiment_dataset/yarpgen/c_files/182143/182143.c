/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-var_3 * (((133690053 < -70) / var_12))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [5] [i_0] [i_3] [i_4] &= (((((arr_7 [19] [i_2] [i_0]) ^ var_4)) & 30514));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((~((((~-51) > var_3)))));
                                var_16 = ((((max(((((arr_4 [i_4] [i_1] [i_2]) ? 29 : var_6))), (((arr_5 [9] [i_0] [i_0] [4]) ? 5609537850461434829 : -177875843))))) ? ((((var_5 ? 34340 : 5423104105528870814)) * (((var_1 * (arr_1 [12] [i_1])))))) : (var_8 / -177875846)));
                                arr_18 [i_0 - 1] [i_1] [i_1] [i_3] [i_4] = (((((-((var_5 ? -1 : (arr_3 [i_4] [i_1])))))) ? (((43 >= -29553) ? (~1307895871) : (((arr_11 [16] [i_1] [i_2] [i_2] [i_2] [i_4]) | var_14)))) : 177875817));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] = var_0;
                    arr_20 [i_0] [i_2] = (((var_7 ? (arr_8 [i_0 - 1]) : 1)));
                }
            }
        }
    }
    #pragma endscop
}
