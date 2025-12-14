/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 *= ((((((arr_1 [i_0] [i_0]) >= -7271)) || (((arr_0 [i_0]) <= (arr_3 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] = ((!(arr_3 [i_0] [i_0])));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_15 [i_4] [i_3] [i_0] = (((((arr_7 [i_4] [i_2] [i_2] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_1 [i_4] [i_0]) ? (arr_4 [i_4] [i_1] [i_1] [i_0]) : (arr_13 [i_0] [i_1 + 2] [i_2] [i_0] [i_4]))))) > var_15));
                                arr_16 [i_4] = ((+(((arr_4 [i_0] [i_0] [i_0] [i_0]) % -1062786994))));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((min(-6, 7270))) ? (((~((-(arr_1 [i_0] [i_0])))))) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])));
                            }
                            arr_18 [i_0] [i_0] [i_0] = (min((min((arr_9 [i_1 + 2]), (arr_9 [i_1 - 1]))), ((-(arr_9 [i_1 + 1])))));
                            var_17 = ((((arr_8 [i_1 + 3] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 2]) ? (max(var_6, 44419)) : (((max(1, 195)))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = 4095;
    #pragma endscop
}
