/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = ((0 ? 0 : (((0 < (~246))))));
    var_21 |= ((!(((0 ? ((var_3 ? 1 : 1)) : var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [2] [i_2] |= var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = (max((((arr_14 [i_4 - 3] [i_1 + 1] [i_0 - 2] [i_4 - 3] [3] [i_1]) ? (!0) : 65535)), ((min((arr_1 [i_0] [i_0]), (arr_13 [i_0 - 2] [i_1] [i_2] [i_3] [i_4]))))));
                                var_22 = (max(((((min(1260693509, 65527))) ? -1 : var_3)), (1073610752 == 46843)));
                            }
                        }
                    }
                    var_23 = ((((arr_2 [i_1]) - (var_15 / 127))));
                    arr_16 [i_0] [i_0] = ((((((((2147483648 ? 0 : (arr_12 [i_2] [i_0] [i_0] [i_0] [i_0])))) ? var_0 : ((max(var_14, var_0)))))) ? var_14 : (!1)));
                }
            }
        }
    }
    #pragma endscop
}
