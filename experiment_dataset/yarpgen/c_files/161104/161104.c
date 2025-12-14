/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? (min((min(var_3, var_0)), (var_7 | 39))) : (((1 == var_4) ? var_9 : (-9223372036854775807 - 1)))));
    var_14 = ((~(((!(-39 >= var_8))))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max(2602182400581304136, (arr_2 [i_0] [i_1])))) ? ((((arr_2 [i_0] [i_1]) == (arr_4 [i_0] [i_1])))) : (((arr_2 [i_1] [i_0]) ? 122 : (arr_0 [i_0])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = var_10;

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            var_17 = (arr_3 [i_3 + 1]);
                            arr_16 [i_1] [i_4] = (!118);
                            var_18 *= ((~(((arr_6 [i_3 + 1] [i_1] [i_0]) ? (arr_14 [i_4] [i_3] [i_2]) : (-127 - 1)))));
                            var_19 = 0;
                        }
                        var_20 += (((((((max((arr_15 [i_3]), -3639506622171543427))) ? (((min((arr_0 [i_1]), (arr_12 [i_0]))))) : (arr_3 [i_1])))) ? (!80) : (((min(1, (arr_11 [i_3] [i_0])))))));
                    }
                    var_21 += ((~(max((((arr_14 [i_0] [i_1] [i_2]) ? (arr_11 [i_2] [i_1]) : (arr_0 [i_1]))), ((~(arr_11 [i_1] [i_0])))))));
                    var_22 = -1;
                    arr_17 [i_0] [0] [i_2] = ((-3639506622171543442 ? (arr_11 [i_0] [i_1]) : ((((arr_8 [i_0] [i_1] [i_2] [i_2]) * 111)))));
                }
            }
        }
    }
    #pragma endscop
}
