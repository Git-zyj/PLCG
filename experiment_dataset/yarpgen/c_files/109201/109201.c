/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 / ((~(arr_0 [i_0 - 3] [i_0 - 3])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (((min((arr_8 [i_0 + 1] [i_3 - 3] [i_4 + 2] [i_0]), (arr_8 [i_0 + 2] [i_3 - 2] [i_4 - 1] [i_0]))) / (((((-1733175135094528717 ? var_0 : var_1)) & var_9)))));
                                var_13 = var_9;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] [8] &= ((1733175135094528704 ? (((((min(var_2, -27012))) - ((-15485 ? 31597 : 1))))) : var_7));
                        arr_18 [i_5] [i_2] [i_0] [i_0] [3] [i_0] = ((15923244306022109060 ? ((((var_4 & 1) ? var_11 : -1733175135094528700))) : 15923244306022109050));
                        var_14 -= 1;
                        var_15 = (((((131 ? var_10 : (arr_3 [i_0 + 2] [i_0 - 2])))) ? (((((176 ? (arr_4 [i_0]) : (arr_0 [i_1] [i_1])))) / ((var_7 ? var_7 : (arr_1 [i_0] [i_5]))))) : ((min(-138, -124)))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((0 ? var_1 : (arr_9 [i_0 - 4]))))));
                        arr_22 [i_6] [i_0] [i_0] [i_1] [i_0] [i_0] = (((((((124 ? 8088 : 15923244306022109060)) * (!24541)))) ? 138 : 1733175135094528683));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [i_0] [i_0] [i_0] = min(((~(arr_12 [i_0] [i_1] [i_2] [i_0]))), (((1 & (~var_4)))));
                        arr_28 [i_0] [i_1] [i_1] [5] = ((~(((arr_1 [i_0] [i_1]) ? 2523499767687442569 : ((min(1, 5322859413546642710)))))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [1] [i_2] [i_0] [12] [i_9] = (min(var_10, (((((min((arr_12 [i_0 + 2] [i_2] [i_8] [i_0]), (arr_9 [i_0])))) ? ((6259097729249334522 ? var_11 : (arr_5 [i_0] [i_0 - 1] [i_0] [i_0]))) : -28782)))));
                            var_17 = (max(var_17, ((max(117, 27012)))));
                            var_18 = -5322859413546642709;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_19 ^= var_0;
                            var_20 -= ((((!(arr_0 [4] [i_0 - 3]))) ? ((min(3218739815, 133))) : ((var_11 ? (arr_11 [i_0]) : (arr_0 [i_0 + 1] [i_0 - 1])))));
                            var_21 -= ((((min((arr_34 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 1]), (arr_29 [i_0] [i_0 - 3] [16] [i_0] [i_0] [i_0 + 1])))) & (min((arr_7 [i_0] [i_0 + 1] [3] [3]), 141))));
                        }
                        var_22 = ((((-5322859413546642692 ? 4398781234879088285 : (arr_24 [i_0 - 2] [i_0] [i_0 - 4]))) & ((min((arr_10 [i_0] [i_8] [i_8] [i_8]), ((min(var_2, var_1))))))));
                        arr_37 [11] [i_1] [i_0] [i_0] [i_8] = var_9;
                    }
                }
            }
        }
        var_23 = ((~((var_10 ? (var_2 + var_11) : (arr_12 [15] [i_0 - 2] [i_0] [i_0])))));
    }
    var_24 += (((~132) / var_8));
    var_25 = var_11;
    #pragma endscop
}
