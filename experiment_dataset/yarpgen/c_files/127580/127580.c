/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = var_0;
                    var_13 = ((~((var_3 ? (arr_1 [i_0] [i_1 + 1]) : (arr_1 [i_2] [i_2])))));
                    var_14 = var_9;
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((((arr_13 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [0]) ? (arr_13 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : 1)) & ((max((arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_11 [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1])))))))));
                                var_16 |= (min(((1475599063 ? 2819368232 : var_2)), (((((min(3224226287, 9223372036854775792))) ? -32764 : (arr_3 [i_1 + 1]))))));
                                var_17 = 2819368214;
                                var_18 *= (((((var_6 - (arr_7 [i_5] [i_0])))) ? (((((arr_3 [i_5]) && ((min((arr_1 [i_4 - 1] [i_4]), (arr_2 [i_0])))))))) : (min(((min(var_5, 124))), (arr_5 [i_0])))));
                            }
                        }
                    }
                    var_19 = (((~var_11) == (!1259312411)));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_20 = (max(1475599063, 1475599078));
                    var_21 = (((max(14063443230688598142, -9223372036854775792)) >> (((max((min(var_11, (arr_13 [i_0] [i_1] [1] [i_6] [i_6]))), (~var_8))) + 43))));

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_19 [i_0] [i_1 - 1] [i_6] = (min(((var_4 ? (((var_9 ? (arr_4 [i_1] [i_7]) : 203))) : (min(-9223372036854775768, var_3)))), (((3601416822 - (arr_12 [i_1 + 1] [i_1] [i_6] [i_0 - 2]))))));
                        arr_20 [i_0] [i_1 + 1] [i_6] [i_6] [4] = (min((1 - 9223372036854775793), -119));
                        var_22 |= arr_17 [i_0] [19] [i_1] [9] [i_7];
                        var_23 = (min(var_23, ((min(((2241025732 & (arr_17 [i_1] [i_1] [i_6] [i_0 - 4] [i_1 + 2]))), (arr_2 [i_7]))))));
                    }
                    var_24 = (max(var_24, (((+((((var_8 | var_5) && (((2819368234 ? (arr_16 [i_1]) : -9223372036854775794)))))))))));
                    arr_21 [i_0] = (((((arr_9 [i_1]) >= (((arr_5 [i_0]) ? var_8 : -7120230090826186099)))) ? (((((!(arr_18 [i_0 - 4] [i_1] [i_6] [i_0] [i_0])))))) : ((((max((arr_16 [i_6]), (arr_1 [i_0] [i_0])))) ? (max(5, 9147343007221000869)) : 1))));
                }
                var_25 ^= (((((+(((arr_10 [i_0]) ? -122 : var_8))))) ? (((max(250, (arr_17 [i_0 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2]))))) : (max(2819368216, (arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_0 + 1])))));
                var_26 = (arr_10 [i_1]);
            }
        }
    }
    var_27 = (min(var_8, var_11));
    #pragma endscop
}
