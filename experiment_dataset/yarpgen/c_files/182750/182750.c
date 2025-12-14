/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0 + 1] = (((arr_3 [i_0] [i_2]) ? (min((arr_2 [i_0 - 1]), (((!(arr_9 [i_0])))))) : (max(var_0, (max(0, var_11))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = arr_15 [10] [i_1] [10] [i_3 + 4] [9];
                                var_16 = (min(var_16, var_4));
                                var_17 = ((-(arr_13 [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] [i_1] [i_3] [i_4])));
                                var_18 = (min((max(((min(var_8, (arr_7 [i_1 + 2] [i_1 + 2] [i_4])))), 1986866701868775121)), 1521207071));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, (((var_8 | (max(-536870656, var_5)))))));
    var_20 = (max(var_14, (-2147483647 - 1)));
    var_21 = var_12;
    var_22 = -1521207048;
    #pragma endscop
}
