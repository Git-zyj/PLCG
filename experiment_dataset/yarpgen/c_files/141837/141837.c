/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? ((55495 ? var_6 : ((var_7 ? var_11 : (-32767 - 1))))) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_1]);
                arr_5 [i_0] [i_1] = (((arr_3 [i_0] [i_0] [i_1]) > (((min(1, (arr_1 [i_0] [i_0]))) | (~126)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                var_21 *= 96;
                                var_22 = (max(var_22, (arr_4 [i_1] [i_2 - 1] [1])));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_23 = ((!(arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_2])));
                                var_24 = ((((min((arr_12 [1] [2] [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_0]), (arr_6 [i_2] [i_2 - 3] [i_2])))) ? ((((3733237608 == 109) || 1))) : (arr_4 [i_5] [i_2] [1])));
                                arr_16 [i_0] [i_1] [i_2] [i_5] = ((((((max((arr_1 [i_5] [i_1]), 65515)) > (arr_10 [i_0] [i_0] [i_1] [i_2 - 2])))) == (((561729687 == (arr_2 [i_0] [i_5]))))));
                                var_25 = (min((min(((min(32763, -25957))), 3733237604)), ((min((min((arr_0 [i_5]), 127)), 16757)))));
                                var_26 = (max((((arr_10 [i_2 - 3] [i_2 + 2] [i_2 + 1] [i_2 + 2]) / (arr_10 [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2 - 3]))), 24656));
                            }
                            var_27 = ((((max(65529, (arr_3 [i_1] [i_2] [i_3])))) && ((min(24332, (arr_4 [i_0] [i_2 + 2] [i_2 - 3]))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (((max(65529, (min(255, 63610)))) / (((-(arr_13 [i_6] [i_6]))))));
        var_28 = 11009074685621080758;
    }
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        var_29 = (min((arr_0 [i_7 - 3]), (min((1 % -64), (arr_13 [i_7 - 3] [i_7])))));
        arr_22 [i_7] = (min((((arr_7 [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 3]) ^ (arr_7 [i_7] [i_7] [i_7 - 1] [i_7 - 2]))), (min(1, (arr_7 [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 1])))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_30 = (min(var_30, ((min((min(4294967040, 1765706510)), ((max((max(43284, 18590)), (arr_13 [i_8] [i_8])))))))));
            var_31 = ((~(arr_3 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
        }
        var_32 = (((((arr_15 [i_7 - 3] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7]) > (((7332 > (arr_2 [i_7 - 2] [i_7 - 2])))))) ? (min((((arr_3 [i_7] [i_7] [i_7]) ? 25077 : 1)), (arr_26 [i_7] [i_7 - 1] [i_7 + 1]))) : (((((~(arr_13 [i_7] [i_7])))) ? ((min((arr_21 [0]), 6))) : ((min((arr_8 [i_7 + 1]), 25077)))))));
        var_33 |= (max(1, (arr_15 [i_7 + 1] [4] [4] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7])));
    }
    #pragma endscop
}
