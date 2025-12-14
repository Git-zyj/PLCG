/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_17 = (max(5, (((!38) ? (!284837934) : (max(2, -23179))))));
                    arr_8 [i_2 - 1] [i_2] [i_0] [i_0] = (max(((3 ? 284837934 : 6855048783957933893)), (((var_2 != (arr_1 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_1] = ((!(arr_4 [i_0])));
                    var_18 = (arr_3 [i_3]);

                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = -3;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_4 - 1] [i_5] = (max(var_14, 0));
                            var_19 = ((!(!var_7)));
                            var_20 = (16 / (min(((max(var_8, -22894))), (var_12 / var_5))));
                        }
                        var_21 -= ((!(!17785232087891091568)));
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_22 [i_6] [i_3] [i_1 - 2] [i_0] = min(var_4, ((((arr_3 [i_0]) ? (!11) : (!-65)))));
                        var_22 = (!var_3);
                        arr_23 [i_6] [i_3] [i_1 + 2] = ((!((max((!6970167827749124312), 17938757577225999909)))));
                        var_23 = (((!82) ? (var_0 && 661511985818460065) : var_2));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1 + 3] [i_1 - 3] [i_1] [i_3] [i_7 - 1] &= 3;
                        arr_28 [i_0] [i_0] [i_0] [i_3] [i_7 + 2] [i_3] = (!40216);
                        arr_29 [i_0] [i_0] [i_0] = (((((arr_16 [i_0] [i_7] [i_1 - 1] [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 1]) + 2147483647)) << (((((arr_16 [i_0] [i_1 - 2] [i_1 - 3] [i_7] [i_7 - 2] [i_0] [i_1]) + 139274839)) - 3))));
                        var_24 = (((arr_6 [i_7 + 2] [i_7 + 2] [i_1 + 2]) + var_0));
                    }
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        arr_32 [i_3] [i_1] = (min((max((min(18446744073709551614, (arr_20 [i_3] [i_1] [i_3] [i_8 + 1]))), (((var_7 ? 2953679673 : (arr_3 [i_0])))))), ((((arr_24 [i_1 + 3] [i_1 + 3] [i_1 + 1]) ? var_14 : (arr_24 [i_0] [i_1 - 2] [i_3]))))));
                        var_25 -= (arr_11 [i_1 + 2]);
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!-284837936);
                        arr_34 [i_8] [i_1 - 1] [i_3] = (min(1, 29012));
                        var_26 = (max(4570175924078886935, (arr_4 [i_1 - 3])));
                    }
                }
                arr_35 [i_0] [i_0] [i_0] = (82 ? (((((arr_26 [i_0] [i_0] [i_0] [i_1 - 1]) || (78 >= 4294967279))))) : (min((max(2, var_8)), (!166))));
            }
        }
    }
    #pragma endscop
}
