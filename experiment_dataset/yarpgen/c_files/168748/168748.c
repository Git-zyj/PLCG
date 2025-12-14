/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_11;
    var_19 *= (~var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_20 = ((((max((arr_0 [i_1 - 2]), 234))) ? (((arr_1 [i_1 + 1] [i_1 - 2]) ? (arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 2]) : (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]))) : ((~(~var_17)))));
                    var_21 = (min(var_21, ((((((((arr_6 [i_2]) > (arr_3 [i_0]))))) ? (((!((-5885 == (arr_3 [i_0])))))) : ((min(10044, (arr_2 [i_1 + 2])))))))));
                    var_22 = 65535;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_12 [i_0] = ((var_16 | ((~(min(1729382256910270464, (arr_2 [i_3])))))));
                    var_23 = ((((max((((!(arr_0 [i_0])))), var_7))) ? (arr_5 [7] [i_1]) : -var_2));
                    arr_13 [i_0] [i_0] [7] = ((var_17 ? (((arr_7 [i_1] [i_1 - 2] [i_1 + 2]) ? (((arr_0 [i_0]) + (arr_2 [i_3]))) : ((var_12 ? var_6 : var_14)))) : ((-((1147659622 ? -10024 : 65516))))));
                    arr_14 [i_0] [i_0] [22] [i_3] = 16888498602639360;
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_24 ^= var_8;
                    arr_17 [i_0] [i_0] [i_4] [i_0] = (((((arr_8 [i_1 + 1]) ? ((var_0 ? var_8 : 3018875698)) : (arr_0 [i_4]))) - (((-((var_13 ? (arr_2 [i_0]) : var_14)))))));
                    var_25 = (((10044 - (arr_10 [i_1]))));
                    arr_18 [i_0] [i_1] = (arr_1 [i_0] [i_1]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_22 [i_0] = ((((var_8 ^ (arr_20 [i_0]))) >= (arr_6 [i_0])));
                    var_26 = var_15;
                    var_27 = (min(var_27, (((!(((arr_5 [i_0] [24]) == 1389588975034152015)))))));
                }
                var_28 = (min(var_28, (((-(max(0, (arr_4 [i_0] [i_1 - 1] [i_0]))))))));
            }
        }
    }
    var_29 = var_4;
    #pragma endscop
}
