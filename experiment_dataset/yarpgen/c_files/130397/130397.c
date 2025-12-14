/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = var_6;
                            var_22 = (max(((-(arr_11 [i_0] [i_1 + 1] [i_2 + 3] [i_0]))), (max((arr_11 [i_2 + 3] [1] [i_1 - 1] [i_3 - 1]), (arr_6 [i_1] [i_3] [i_3])))));
                            var_23 = (max(var_23, (((((!((((arr_1 [i_3 + 1]) ? var_4 : 0))))) ? var_19 : ((-97 ? (arr_0 [i_2 - 1]) : -97)))))));
                        }
                    }
                }
                var_24 += (max(((var_2 ? var_13 : var_6), (arr_8 [i_0] [0] [i_0] [4]))));
                var_25 = ((!((max(var_8, (((var_6 ? var_19 : 53392))))))));

                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_26 = (max(var_26, (((-(((var_12 & (arr_9 [i_0] [8])))))))));
                    arr_14 [8] [i_1 - 1] [i_1] = (((arr_11 [i_1 + 1] [i_1 + 1] [1] [i_1 + 1]) >> (var_11 - 8610584108671332398)));
                    var_27 = (max(var_27, ((min(18446744073709551611, 7)))));
                    var_28 = ((max((((4870568137277287459 ? 341105860 : 662602817))), var_11)));
                }
                var_29 = (min(((15 ? ((max((arr_4 [i_0] [i_1 - 1] [i_1]), -815428482))) : (arr_0 [i_1]))), 53392));
            }
        }
    }
    var_30 = (53393 != 4294967281);
    var_31 |= (((((~(!var_15)))) ? 1966080 : (((((662602825 ? var_13 : var_7))) ? (18446744073709551612 + 7) : var_13))));
    #pragma endscop
}
