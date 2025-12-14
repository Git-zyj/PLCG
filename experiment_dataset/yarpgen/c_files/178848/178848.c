/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (0 % (-9223372036854775807 - 1));
    var_21 = (max(((((max(var_8, var_12))) ? (var_7 || var_13) : ((var_7 ? var_6 : var_5)))), var_7));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (((arr_7 [i_0] [i_0] [i_2] [i_2]) ? (var_10 / var_15) : ((((-209479088 * 0) != (((((arr_6 [i_0]) <= var_1)))))))));
                    var_23 = (min(var_23, ((!((max((min(9223372036854775807, 9223372036854775807)), 2048)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_24 &= (-(((arr_12 [i_3] [i_3] [i_4 - 2] [i_4 - 2] [i_4 - 2]) ? (arr_12 [i_3] [i_4 + 3] [i_4 + 2] [i_4 - 2] [i_4]) : (arr_12 [i_3 + 1] [i_4 + 4] [i_4 + 2] [i_3 + 1] [i_4]))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = ((((min(100663296, (arr_0 [i_0])))) ? (((arr_13 [i_4 + 1] [i_3 + 1] [i_1] [i_1 + 1] [i_0 + 4] [i_0 + 4]) ? (arr_13 [i_4 - 2] [i_3 + 1] [i_2] [i_1 - 1] [i_1] [i_0 + 4]) : (arr_13 [i_4 + 2] [i_3 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_0 - 1]))) : (((((min(62, 1))) ? ((-(arr_4 [i_2]))) : (arr_4 [i_0 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [1] |= (((max(33554431, -1))) ? (arr_5 [14]) : (arr_2 [i_0]));
    }
    #pragma endscop
}
