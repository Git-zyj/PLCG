/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((max(((min(var_3, 2))), (arr_1 [i_0 + 1]))))));
        arr_3 [i_0] = (((((-(arr_2 [i_0]))))));
        arr_4 [i_0] = (arr_2 [7]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = (min(var_17, ((((((arr_0 [i_1 - 2]) >= (arr_0 [i_1 - 1]))) ? ((((arr_2 [i_1 - 2]) && -7321333991660102260))) : ((((arr_10 [i_1 - 1] [i_1 - 2]) >= (arr_10 [i_1 + 1] [i_1 - 1])))))))));
            var_18 = (min(var_18, var_5));
        }
        arr_11 [i_1] = (max((~var_10), ((~((var_14 ? (arr_0 [7]) : var_8))))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_19 = ((arr_19 [i_1] [i_3 - 2] [i_4] [i_1] [i_4] [i_5 + 1]) + (arr_18 [i_4 + 3] [i_1 - 1] [i_1] [i_1] [i_1]));
                            var_20 |= (((~var_11) - (arr_8 [i_4 - 1])));
                            arr_22 [i_4] [i_5] [i_4] [i_3] [i_4] = (((44347 ^ (arr_16 [2] [4] [2] [i_4]))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_21 = min(((((arr_8 [i_4]) < 1576944667))), (((arr_7 [i_3 - 2]) ? (arr_14 [i_5] [i_3 + 1]) : (arr_14 [i_5] [i_3 - 2]))));
                            arr_25 [i_7] [i_1] [i_4] [i_1] [i_1] &= (min((((((((-2147483647 - 1) <= (arr_13 [i_7])))) - ((~(arr_6 [i_5] [i_1])))))), 2251799811588096));
                        }
                        arr_26 [i_1] [i_3] [i_4] = (min(var_4, (arr_24 [i_1] [i_4] [i_4] [i_5] [i_4] [i_1])));
                        arr_27 [20] [i_3] [i_4] [i_5] [20] |= (((((!((max(554528075, var_9)))))) & var_6));
                        var_22 = (max(var_22, (((+((min((arr_12 [i_4]), var_4))))))));
                    }
                }
            }
        }
        arr_28 [i_1] = ((((min((arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1]), 53884))) ? (((!(arr_13 [i_1 - 2])))) : (max((-2147483647 - 1), (arr_6 [3] [i_1 - 1])))));
    }
    var_23 = var_10;
    var_24 = 1463;
    #pragma endscop
}
