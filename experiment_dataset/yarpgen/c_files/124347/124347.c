/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? 1703305875 : 349042624));

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((((+((((arr_1 [i_0]) != (arr_0 [i_2]))))))) ? 65535 : (max(((max(var_13, var_4))), (arr_2 [i_0] [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((((arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_1] [i_4]) ? (arr_0 [i_0 - 2]) : (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_2])))) ? ((max(var_2, (arr_9 [i_0 - 3] [12] [9] [i_3] [i_4])))) : (arr_0 [i_0 + 1]))))));
                                var_21 = (((349042624 >> 1) ? ((7479 ? ((max((arr_1 [i_0]), -7490))) : var_12)) : 14694));
                                var_22 = (((-(arr_2 [i_0 - 1] [i_0] [i_3 + 1]))));
                            }
                        }
                    }
                    var_23 = 14697;
                    var_24 = (min((((~112) ? -var_11 : ((((arr_5 [i_0] [i_0] [13] [i_2]) == 349042624))))), ((min((arr_9 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 + 1]), ((max((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]), var_10))))))));
                    var_25 &= -var_1;
                }
            }
        }
        arr_13 [i_0] = (((-(arr_4 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((!var_17) % var_3)))));
        arr_16 [0] [i_5] &= (arr_9 [i_5] [i_5 - 1] [11] [i_5 - 2] [1]);
        arr_17 [6] |= var_0;
        var_27 = (((arr_5 [i_5 - 3] [i_5 + 1] [i_5 - 3] [13]) ? (arr_7 [i_5] [i_5] [i_5] [i_5 - 2]) : (((-32767 - 1) * 13956144054641409703))));
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = 57;
        arr_21 [i_6] = 3945924672;
        arr_22 [12] |= ((((((arr_1 [i_6]) ? -5869811894451742573 : var_7))) ? (((3327551809 ? (arr_0 [i_6 - 1]) : 160))) : ((~(min(9223372036854775797, var_2))))));
        var_28 = var_3;
        arr_23 [i_6] = min((((-102 ? 3945924672 : (arr_9 [13] [i_6] [i_6] [i_6] [i_6 - 3])))), (max(var_9, (max(var_12, 16778747266823013251)))));
    }
    var_29 &= (max((var_13 & var_13), var_11));
    var_30 = (max(var_30, -1));
    #pragma endscop
}
