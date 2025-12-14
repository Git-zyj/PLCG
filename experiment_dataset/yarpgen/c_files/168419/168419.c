/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((max(18446744073709551603, 281406257233920)), var_2)) + var_4));
    var_11 &= 4294967277;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((-((+(min((arr_2 [i_0]), (arr_2 [i_0])))))));
        var_13 = (min((((!(arr_2 [i_0])))), (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_14 = (((arr_4 [i_1] [i_1] [i_1 + 3]) < (arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 3])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_15 = (arr_3 [i_0] [i_1 + 2] [i_1 + 2]);

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 = (((!var_1) + (arr_5 [i_0] [i_0] [i_3])));
                    var_17 &= ((-((5 ? 13 : 219))));
                    var_18 *= (arr_4 [i_0] [i_0] [i_2]);
                }
                var_19 = var_3;
                var_20 = (min(var_20, (arr_4 [i_1 + 3] [10] [i_1])));
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((arr_7 [i_0] [i_1 + 1] [i_5]) ? (((arr_6 [14] [14] [i_4]) << (2147483392 - 2147483383))) : (arr_7 [i_0] [i_0] [i_1 + 2]))))));
                        var_22 = (!(arr_2 [1]));

                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            var_23 = (((((1 ? 18446744073709551615 : 7))) ? 2777240430 : 1));
                            var_24 = ((~(arr_7 [i_0] [i_0] [i_1 + 1])));
                            var_25 = (max(var_25, var_1));
                            var_26 = (min(var_26, ((((arr_15 [14] [i_1 - 1] [i_4] [i_4] [i_6]) ? (arr_15 [i_1] [i_1 + 2] [i_6] [i_6] [i_1 + 2]) : var_3)))));
                            var_27 = ((arr_15 [i_1] [i_1] [i_1 - 1] [i_5] [7]) ? (arr_9 [12] [i_0] [i_1 - 1] [i_4]) : 1);
                        }
                        var_28 += 17;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_29 = ((((arr_16 [i_7] [i_7]) ? (arr_16 [i_7] [i_7]) : 523264)));
        var_30 = (((arr_17 [i_7]) >> (((((arr_16 [i_7] [i_7]) ? (arr_17 [12]) : (!4294967266))) - 13307))));
        var_31 = (~var_7);
        var_32 |= ((~((max((arr_18 [i_7] [2]), 1)))));
        var_33 = (!((max((arr_16 [i_7] [i_7]), 96))));
    }
    var_34 &= (((-var_1 ? 9779 : 1098748381)));
    #pragma endscop
}
