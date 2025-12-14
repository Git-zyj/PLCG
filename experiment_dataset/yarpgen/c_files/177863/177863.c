/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(((var_8 ? var_0 : var_4), ((max(var_1, 10)))))));
    var_11 *= ((21 != (((max(1, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = 8;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (arr_11 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3]);

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] = (min((min((arr_3 [i_1] [i_4 + 1]), (arr_3 [i_1] [i_4 + 1]))), ((~(arr_3 [i_1] [i_4 + 1])))));
                            var_13 = (min(var_13, (10 | 10)));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_19 [i_1] = arr_7 [i_1 - 1] [i_1 - 1];
                            var_14 = (min(var_14, (((-((var_2 & ((var_6 ? (arr_15 [i_5] [1] [8] [i_1] [i_1] [1] [i_0]) : 1304765475484253235)))))))));
                        }
                        arr_20 [i_0] [i_1] [i_2] [i_3] = (~(~0));
                        var_15 = (~10);
                    }
                }
            }
        }
    }
    #pragma endscop
}
