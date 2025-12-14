/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 += var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1 + 1] [i_1] = var_9;
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [9] [i_4] = (max((((arr_0 [i_0 - 2] [i_1 - 3]) >> (arr_0 [i_0 - 1] [i_1 - 1]))), ((112 ^ (arr_0 [i_0 - 1] [i_1 - 2])))));
                                arr_15 [i_0] [i_1] = (arr_7 [i_1] [17] [i_1]);
                                var_19 += (min(((17 ? (arr_12 [i_3] [i_3] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1]) : var_7)), (arr_9 [17] [17] [i_3] [i_3])));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] = (arr_1 [i_0]);
                var_20 += (((arr_10 [i_0 + 1] [i_0 + 1] [0] [i_0] [i_0]) == var_16));
            }
        }
    }
    var_21 = ((min(1, 1)));
    var_22 = var_6;
    #pragma endscop
}
