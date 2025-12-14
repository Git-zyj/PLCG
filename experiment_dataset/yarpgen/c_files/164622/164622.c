/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(10859797944201490191, -6768032899479772262))) ? (min(((var_1 ? var_10 : var_10)), var_1)) : 1));
    var_19 = (max(var_19, (max((((((min(1, 0))) & (1 >> 1)))), (min(((var_5 ? var_17 : var_8)), (var_7 ^ var_11)))))));
    var_20 = (max(var_20, ((((!var_1) ? var_7 : var_5)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_21 += (min(((min(((var_17 != (arr_5 [i_0] [i_1] [i_3] [i_4 + 2]))), ((var_0 && (arr_0 [i_0])))))), var_5));
                            var_22 = var_10;
                        }
                    }
                }
            }
            arr_14 [i_0] [i_0] [i_1] = ((((max((var_2 && var_11), (min(var_8, 2481614583144957702))))) ? (((var_1 >> (min(1, 4920589107182138685))))) : (arr_2 [1] [i_0] [1])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_23 -= (((arr_15 [9] [i_1] [5]) ? (!var_5) : ((((arr_18 [i_0] [i_0] [i_0] [i_6]) <= (((arr_6 [i_0] [i_0] [1] [i_6]) & (arr_18 [i_0] [i_0] [i_5] [i_5]))))))));
                        arr_21 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_1] [i_1]);

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_24 = var_2;
                            arr_25 [i_0] [i_1] [1] [6] [i_0] = (arr_7 [i_7] [i_6] [i_0] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_25 = (min((((arr_19 [i_0] [i_1] [i_0] [i_1] [i_0]) ? var_6 : 1)), ((((arr_18 [i_0] [i_1] [i_5] [i_6]) && (arr_18 [i_8] [i_1] [i_1] [i_0]))))));
                            var_26 = ((min((arr_10 [i_8]), ((var_8 ? var_16 : (arr_13 [i_8] [i_6] [i_5] [i_1] [i_0]))))));
                            arr_29 [2] [i_6] [i_1] [i_1] [1] [i_0] = (max(((var_6 || (((-(arr_26 [i_0] [i_1] [i_5] [i_0] [i_6] [i_8])))))), var_2));
                        }
                        var_27 |= (10859797944201490172 ? -1306319635 : 2448902699820456034);
                        var_28 = (arr_12 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6]);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_37 [6] [i_10] [6] [1] [i_0] = ((((min(-var_8, ((min(var_3, var_2)))))) ? ((((min(0, 1)) ? ((((arr_20 [i_0] [i_0] [i_9] [i_10] [i_10] [i_11]) <= 0))) : var_2))) : (max(-2448902699820456034, (((arr_22 [i_10] [i_11] [i_10]) | var_13))))));
                        arr_38 [2] [0] [2] [i_11] |= 14407944496280850430;
                    }
                }
            }
            var_29 = ((((((max((arr_18 [i_0] [i_0] [i_0] [i_0]), 4038799577428701186))) ? var_8 : (10859797944201490191 || var_1))) <= ((min(((min(1, 1))), (1 / 1))))));
            arr_39 [i_0] [i_9] = var_16;
        }
        var_30 *= (max(((max((min(var_17, (arr_34 [i_0] [i_0] [i_0] [i_0]))), -var_16))), ((~(arr_22 [i_0] [i_0] [i_0])))));
        arr_40 [i_0] [i_0] = (((arr_23 [i_0]) <= (((arr_19 [i_0] [9] [i_0] [i_0] [i_0]) >> (var_5 + 4596040240388832551)))));
    }
    #pragma endscop
}
