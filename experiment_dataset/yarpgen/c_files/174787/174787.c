/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 = ((!(arr_9 [10] [i_1] [i_2])));
                            var_17 = (max(var_17, ((((-468028722 ? (((arr_12 [i_0] [i_0] [i_3]) & (arr_5 [i_0]))) : (~640202848))) | (601643160 | -88)))));
                            arr_13 [i_0] [i_0] [i_2] [i_0] = (2051894915 ? ((-1561336787 ? (arr_2 [i_0]) : (arr_3 [4]))) : (((arr_11 [i_2 + 2] [i_2 + 2]) + (arr_0 [i_3 - 4] [i_3]))));
                        }
                    }
                }
                var_18 = -70;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_19 = (max((min((arr_4 [i_1 - 1] [i_0 + 1]), (arr_4 [i_1 - 1] [i_0 - 1]))), var_8));
                            var_20 |= ((((max((arr_4 [i_0] [i_4]), (arr_17 [i_0])))) && ((1561336787 > (arr_15 [i_0] [i_0] [i_0])))));
                            arr_19 [i_4] [i_4] [i_0] |= ((28161 > (arr_16 [i_0] [i_1 + 1] [i_4] [i_5])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
