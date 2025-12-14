/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 <= (((13149 - 1) ? var_6 : -var_13))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((!(arr_2 [i_0 + 1]))) ? (((arr_2 [i_0 + 3]) ? (arr_2 [i_0 - 1]) : var_0)) : -1825023890))));
        var_19 = ((~(max(((0 << (2716127184497307948 - 2716127184497307918))), var_5))));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 += min((((arr_0 [i_3 - 2] [i_1 + 1]) >> var_8)), (arr_5 [i_0] [i_0] [i_0]));
                            var_21 = (~(arr_3 [10]));
                            var_22 = (~235);
                            arr_15 [i_0 - 1] [i_1] [i_3] [0] = (1 != 11);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_23 = 839163773;
                            var_24 += (min((((arr_6 [i_1 + 1] [i_1]) ? 839163751 : var_16)), (!0)));
                            arr_18 [i_1] [i_3] [i_2 + 1] [i_1] [i_5] = (var_16 <= 3455803558);
                            arr_19 [2] [i_3] [i_1] [i_1] [i_0] = (min(732105336, ((-(arr_10 [i_1 + 1] [i_1] [i_2 + 1] [i_3 + 1])))));
                            arr_20 [i_5] [i_3] [i_1] [i_1] [1] [i_0] = (-(((~-1105795296) ^ (((arr_11 [i_3]) ? 142641467 : var_10)))));
                        }
                        arr_21 [i_1] [i_1] [i_2] = (((((arr_2 [i_3 - 2]) << (arr_2 [i_3 - 1]))) >= 732105336));
                    }
                }
            }
            arr_22 [i_1] = 1;
        }
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_25 = (max(var_25, ((((var_2 || (arr_7 [i_6] [i_6] [i_6])))))));
        var_26 &= ((2458504489415605036 ? (((var_11 >= ((0 ? var_9 : (arr_24 [i_6 + 2] [i_6])))))) : (arr_11 [i_6 - 1])));
    }
    var_27 = (min(var_27, (((562431833 ? 0 : var_12)))));
    #pragma endscop
}
