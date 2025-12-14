/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 ? (((var_1 ? -6137 : -58))) : var_1)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 && (((((217 ? 24 : 4294967294)) >> (((arr_1 [i_0 - 1]) - 10730)))))));
        var_11 = arr_0 [i_0 + 2];
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_12 = 1910416174;
                            var_13 = (((((var_4 ? (!-5390675194960702044) : ((var_6 << (arr_5 [i_1])))))) == (max(243, ((var_3 ? var_0 : var_8))))));
                            arr_17 [i_3] [i_2] [i_2] [i_3] [i_4] [i_5] = ((1910416174 % -var_1) != (arr_13 [i_1 + 1] [i_2] [i_3] [i_4] [i_5 - 1]));
                            var_14 = (arr_5 [i_1 + 1]);
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            arr_21 [i_3] [i_2] [i_2] [i_2] [i_2] = (((min(1637310599, 0)) & (arr_18 [i_1 - 1] [i_6 + 1])));
                            arr_22 [i_1 + 1] [i_2] [i_3] [i_3] [i_3] [i_3] [i_6] = ((+((-(max((arr_18 [i_2] [i_4]), (arr_16 [i_3] [i_2] [i_3] [i_4] [i_6])))))));
                            var_15 = (min(((max(var_9, (arr_3 [i_2])))), (((arr_4 [i_1 - 1]) + -1))));
                            var_16 = ((~(min(var_7, ((14087 ? (arr_9 [i_1] [i_3] [i_3] [i_6]) : 526935197506428915))))));
                        }
                        var_17 = var_6;
                    }
                }
            }
            arr_23 [i_1] = (((((arr_18 [i_1 - 1] [i_1 - 1]) ? 79 : (2657656697 - 1771047541))) == var_2));
            arr_24 [i_1] [i_2] [i_2] = ((~((211 ? (arr_14 [i_1] [i_1 + 1]) : (arr_14 [i_2] [i_1 + 1])))));
        }
        arr_25 [i_1] = (((arr_8 [2] [i_1 + 1] [i_1]) ? var_0 : (((var_1 ? var_9 : var_1)))));
        var_18 = 7517804102177619847;
        var_19 = min((((!((min((arr_14 [i_1] [i_1]), 12348)))))), (min(((208 ? var_0 : var_3)), (var_9 / 10309069626624476791))));
        var_20 = (arr_4 [i_1]);
    }
    var_21 = ((!(!-14058203139188832)));
    #pragma endscop
}
