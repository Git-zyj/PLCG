/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((max(14279, (~127))));
    var_16 &= (+-4294967285);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 &= (min(((~(arr_4 [i_1 + 1] [i_1 - 1]))), ((~(~4457789549330761088)))));
                arr_5 [5] [i_1] = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_18 = ((~((-102 ? (arr_11 [i_0] [1]) : (arr_11 [2] [i_1 - 1])))));
                                var_19 = 1;
                            }
                            var_20 = ((~((9276 ? (arr_8 [2] [2] [i_1 - 1]) : (arr_8 [i_0] [i_0] [i_1 + 1])))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 2393537591;

                            for (int i_5 = 1; i_5 < 16;i_5 += 1)
                            {
                                var_21 = (arr_8 [i_0] [i_1 - 1] [i_5 + 1]);
                                var_22 = 193917304;
                                arr_17 [i_0] [i_5] = (arr_1 [i_1 + 1]);
                                arr_18 [i_0] [11] [14] [i_5] [i_0] = (min(((min((arr_16 [i_1 - 1] [i_1 + 1] [i_3 + 4] [i_5 + 2] [i_5 + 1]), (arr_16 [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_5 + 1] [i_5 - 1])))), (arr_16 [i_1 + 1] [i_1 + 1] [i_3 + 3] [i_5 - 1] [i_5 + 1])));
                            }
                            arr_19 [13] [1] [i_3] [1] = (arr_4 [i_3 + 2] [i_3 + 3]);
                        }
                    }
                }
            }
        }
    }
    var_23 = ((88 >= -111) > var_6);
    #pragma endscop
}
