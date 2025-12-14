/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (~139861880);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        arr_15 [i_2] [20] [i_2] [i_3] = (((30197 % -74) > (arr_8 [i_2] [i_1 - 1] [i_2])));
                        arr_16 [i_2] [i_1 + 1] = (arr_12 [i_2] [i_1 - 2]);
                        arr_17 [17] [i_2] [i_2] [i_0] = (((arr_1 [i_1 + 2] [i_3 - 1]) == 7));
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_17 = arr_2 [i_0];
                        arr_20 [i_0] &= (((arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) > (arr_6 [i_1 + 3] [i_1 + 1] [i_1 - 1])));
                        var_18 = (arr_13 [i_2] [i_2] [i_2]);
                    }
                    var_19 -= 15273;
                    arr_21 [i_1 + 3] [i_2] = -74;
                    var_20 &= (-70 >= 2390957284);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_21 = (1441582196 != 10327);
                    var_22 &= ((((4155105416 != (arr_4 [i_1] [i_1])))));
                    arr_24 [i_1] [i_5] = 1;
                    var_23 &= 129;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_24 = ((!((!(arr_8 [i_0] [i_6] [i_6])))));
                    arr_27 [i_1 + 2] = ((~(!3525753221)));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_25 &= 195;
                        var_26 -= (arr_29 [i_0] [i_0] [i_6] [i_0]);
                        var_27 = ((!(((arr_5 [i_0] [i_6] [i_6]) > 99))));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_28 -= ((max((arr_3 [i_1 - 1]), (arr_22 [i_8]))));
                        arr_33 [i_1] [i_8] = (arr_4 [i_1] [i_8]);
                        var_29 = (((arr_5 [i_0] [i_0] [i_6]) >= (arr_7 [i_0] [i_6] [i_8])));
                        arr_34 [i_8] [i_1 - 1] [i_6] [i_8] = ((39 - (((arr_19 [i_6] [i_8] [0] [i_1 - 1]) ? (arr_14 [i_0] [i_1 + 2] [i_0] [i_1 - 1] [i_0]) : (arr_12 [i_8] [i_8])))));
                        arr_35 [i_8] [4] [i_6] [i_8] = ((((arr_31 [i_8] [i_8] [i_6] [i_1] [i_1] [1]) * (((139861884 == (arr_13 [i_8] [i_1] [i_6])))))));
                    }
                }
                arr_36 [i_0] = -24;
            }
        }
    }
    #pragma endscop
}
