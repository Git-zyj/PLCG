/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 57661;
    var_21 = 98304;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_22 ^= -var_2;
                    arr_10 [i_0] [i_1] [i_1] = var_12;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_23 = (((arr_4 [i_1 - 1]) << (((arr_4 [i_1 - 1]) - 50))));
                    var_24 = (arr_8 [i_1] [i_1] [16]);

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [1] = ((arr_13 [i_1] [i_0] [i_1 - 1]) ? var_8 : var_15);
                        var_25 = ((!((!(arr_6 [i_1 - 1] [i_4])))));
                        var_26 = (min(var_26, 57661));
                    }
                    var_27 ^= ((var_2 + (!var_18)));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_25 [13] [i_1] = (1 % 24576);
                                var_28 |= var_3;
                            }
                        }
                    }
                    var_29 = (((arr_23 [i_0]) % ((var_14 ? (max((arr_2 [i_0]), var_15)) : 1292690876))));
                    var_30 ^= (min((((var_10 ? var_11 : (arr_22 [0] [0] [0] [i_5])))), var_13));
                    arr_26 [i_1] [7] = ((((((max(1, 1)) ? 25430 : ((((arr_19 [i_0] [i_1]) >= var_18)))))) ? (150 & var_6) : var_12));
                }
                arr_27 [i_1] = ((((var_8 ? (((294611305 ? var_0 : 237))) : var_11)) == (arr_23 [i_0])));
            }
        }
    }
    var_31 = ((var_7 ? var_15 : ((9540735510991154467 ? var_14 : (max(var_11, 19235))))));
    #pragma endscop
}
