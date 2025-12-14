/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [0] = (((-(((!(-9223372036854775807 - 1)))))));
                var_20 = ((1346869752 && (~var_6)));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_2] = var_12;
                    arr_9 [i_2] [i_2] [i_2] [3] = ((!-637608283) ? (((((max(-637608283, 15719))) != (min(var_3, var_6))))) : var_5);
                    var_21 = ((((!(!var_8))) ? (((!(arr_3 [i_2 + 2])))) : (((arr_1 [i_1] [i_1]) & var_17))));
                    var_22 = ((-((-var_5 % ((~(-32767 - 1)))))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_23 = (min(var_23, (((-637608283 ? var_1 : var_9)))));
                    var_24 = (var_17 ? (arr_0 [i_3]) : (-32767 - 1));
                    arr_12 [i_0] [i_1] [2] [i_0] = -1;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_25 = (!-637608283);
                        arr_18 [4] [4] [i_4] [i_5 + 1] = var_2;

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_22 [10] [i_1] [i_1] [i_1] [i_1] [i_1] = (!47193);
                            arr_23 [i_0] [i_0 - 4] [i_0] [i_0] [5] [i_0] = ((!(((32743 ? (arr_17 [i_0] [i_1] [4] [i_5] [i_1]) : var_5)))));
                            arr_24 [i_0 + 2] [8] [i_4] [i_0 + 2] [10] = var_16;
                            var_26 -= ((!(~-25883)));
                            var_27 -= -var_6;
                        }
                        arr_25 [i_0 - 1] [i_1] [i_0 - 1] [i_5 - 1] = ((~((-(arr_13 [i_0 - 3] [i_1] [i_4])))));
                    }
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_28 = (arr_3 [i_0 + 1]);
                        arr_30 [i_0] [i_1] [3] [i_7] = (~var_0);
                        var_29 = (~391287713);
                        var_30 = (min(var_30, 11440915116428684036));
                    }
                    var_31 -= 5239;
                }
            }
        }
    }
    var_32 &= ((!((!(~815509875)))));
    var_33 = 4;
    #pragma endscop
}
