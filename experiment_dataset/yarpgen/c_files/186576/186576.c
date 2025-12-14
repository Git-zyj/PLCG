/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min(var_5, (arr_0 [i_0]))))));
                arr_4 [6] = ((46852 ? 46852 : 46852));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((((((max(-24683, (arr_7 [i_1] [i_1] [i_1] [i_3])))) ? -31 : var_14))) ? ((-(arr_5 [i_0] [i_1] [i_0] [i_3]))) : ((46852 ? (arr_2 [i_3]) : (arr_2 [i_1]))))))));
                            var_23 = (min(var_23, (((46847 >> (((arr_0 [9]) - 121)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] &= ((-(18683 * 59575)));
                                var_24 = (max(var_24, (arr_13 [i_0] [i_1] [i_4] [i_4] [i_6])));
                                var_25 = (min(((~(arr_9 [i_0] [i_1]))), ((~(arr_9 [13] [i_1])))));
                                arr_20 [i_4] [i_5] [i_4] [i_4] = (arr_2 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
