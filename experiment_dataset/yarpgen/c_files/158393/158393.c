/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (max(var_16, (((var_11 ? ((((min(1827841213648310705, var_3))) ? var_8 : var_9)) : (((var_3 | ((max(127, -108)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] = (min(var_10, ((((arr_10 [i_4] [i_3 + 1] [i_2 + 4] [i_2] [4] [i_0]) ? 127 : (arr_8 [i_0] [i_1] [i_2 + 3] [i_2 + 3] [i_3] [i_4]))))));
                                arr_15 [i_0] [11] [i_0] [i_0] [i_0] [10] = (arr_1 [i_3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (max(var_17, (106 & 1827841213648310705)));
                            var_18 = ((min((arr_17 [i_0] [i_0] [i_5]), (arr_6 [i_0] [i_0] [i_5]))));
                            var_19 = ((3892437347 >> (((max((83 * 65534), 3)) - 5439307))));
                        }
                    }
                }
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
