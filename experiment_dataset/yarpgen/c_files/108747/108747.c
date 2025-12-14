/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_15 > var_4) / (max((var_6 | var_16), (var_5 & var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_18 = var_5;
                        var_19 = (max((var_15 != var_14), var_10));
                    }
                    var_20 = var_13;
                    arr_13 [i_0] [i_0] [i_2] = var_9;

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_4] = ((((var_3 & var_6) % (arr_10 [i_0] [i_2]))));
                        var_21 = (((var_12 >> (var_2 > var_15))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_0] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ^ (max(var_4, (arr_9 [i_5] [1] [i_1] [i_0])))));
                        var_22 ^= (min((((arr_1 [1]) ? (arr_14 [i_5] [16] [16] [i_0]) : var_15)), (max((min(var_5, var_2)), ((max(var_8, (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_23 |= var_3;
                        arr_23 [i_0] [i_0] = (arr_6 [i_0] [i_6]);
                    }
                }
            }
        }
    }
    var_24 = ((((max((var_6 >= var_2), var_14))) && (var_16 - var_13)));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                {
                    arr_33 [i_8] [16] = (arr_3 [i_9 - 1] [i_9 - 1]);

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_25 = var_2;
                        arr_38 [i_10] [i_8] [i_9 - 3] [i_9 - 3] = max((min(((min(var_9, var_6))), (arr_20 [i_8] [i_10]))), (arr_9 [i_9 + 1] [i_9] [i_9 - 3] [i_9 - 3]));
                        var_26 = (min(var_26, ((((((1 ? 9 : 32767))) ? (max(var_15, var_2)) : ((((arr_4 [i_9 - 1] [i_9 - 2]) | ((max(var_5, var_8)))))))))));
                    }
                    var_27 = (max(var_27, ((((var_14 > (arr_26 [i_7])))))));
                    var_28 = var_3;
                }
            }
        }
    }
    var_29 = ((((max(((1 ? -32757 : var_2)), ((var_8 ? 13867430327838774125 : 127))))) ? ((((max(var_11, var_13))) ? var_4 : (!var_4))) : var_14));
    #pragma endscop
}
