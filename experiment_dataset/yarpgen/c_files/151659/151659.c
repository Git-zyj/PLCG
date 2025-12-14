/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!((max(5808, var_16))))) ? (!2371121237770562977) : (var_15 || var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_0] [i_0] = 0;
                            arr_9 [i_2] [i_1] [3] [i_0] [i_1] = (arr_4 [i_0]);

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_0] = ((!16075622835938988639) ^ ((min(((var_11 == (arr_2 [i_0]))), (!var_1)))));
                                var_18 = (var_14 || var_11);
                                arr_13 [0] [i_1] [i_1] [i_1] [i_0] = ((var_1 <= ((((arr_2 [i_0]) < var_11)))));
                                var_19 = (max((arr_1 [i_1]), ((0 ^ (arr_5 [i_2])))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_16 [i_0] [i_0] = ((-(((!(arr_14 [i_3] [i_1] [i_2] [13] [i_0] [i_5]))))));
                                var_20 = (arr_10 [i_1] [i_2] [i_3] [i_0]);
                                var_21 = (-111 ^ (min((arr_1 [i_0]), (max((arr_6 [i_0]), 18446744073709551615)))));
                            }
                        }
                    }
                }
                var_22 = (((~(arr_7 [i_0] [i_0]))));
                var_23 = (i_0 % 2 == zero) ? ((min((((arr_6 [i_0]) - ((~(arr_2 [i_0]))))), (((-var_8 + 2147483647) >> ((((-(arr_11 [i_0] [i_0]))) - 2064707432))))))) : ((min((((arr_6 [i_0]) - ((~(arr_2 [i_0]))))), (((-var_8 + 2147483647) >> ((((((-(arr_11 [i_0] [i_0]))) - 2064707432)) + 1042352682)))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = (!var_12);
                                arr_27 [i_0] [i_0] = ((!var_7) && (arr_26 [i_0] [i_0] [i_6] [i_7] [i_8]));
                            }
                        }
                    }
                }
                arr_28 [i_0] [i_1] [i_0] = ((((~(~16075622835938988639)))) ? (((((((arr_2 [i_0]) + (arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])))) ? (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_1 [i_0])))) : (max(2282102176, 6)));
            }
        }
    }
    var_25 |= ((-106 < ((var_1 ^ (max(var_3, 16075622835938988638))))));
    #pragma endscop
}
