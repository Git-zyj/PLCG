/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_11 = (((1 ? var_1 : (~var_6))) >> (((arr_6 [i_0] [i_1] [i_3 + 3] [i_3 - 2]) % (arr_6 [i_1] [i_1] [i_3 + 3] [i_3 + 2]))));
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = (arr_0 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_12 = (((~(7618143203537428048 / 9103))));
                                var_13 = ((~((~(((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((arr_5 [i_0] [i_0]) - 2225846210519282128))))))));
                                var_14 -= ((-((+(((arr_14 [16] [i_0] [i_5] [i_2] [i_4] [i_2]) % 115))))));
                                var_15 = ((0 || ((((max(-116, (arr_3 [i_2] [i_1] [i_0])))) > -89))));
                            }
                        }
                    }
                    var_16 &= (((~(min((arr_5 [i_0] [6]), 18181542652115942873)))));
                    arr_18 [i_0] [i_1] [i_0] [i_0] = ((((max(((-(arr_5 [12] [i_2 + 2]))), (var_7 - 2103066353)))) ? (arr_7 [i_0] [i_1] [i_2]) : ((max(var_6, ((max(var_2, (arr_8 [i_0] [i_1] [i_0])))))))));
                    var_17 ^= (max(-var_8, ((~(arr_16 [10])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] = (max((((arr_15 [i_6] [i_6] [i_6] [21]) ? (((arr_22 [i_6]) ? (arr_12 [i_7] [1] [i_6] [i_7] [i_6]) : (arr_6 [i_6] [i_6] [i_6] [i_6]))) : var_8)), (arr_0 [i_6])));
                arr_26 [i_6] [i_7] [4] = ((((((arr_20 [i_6] [i_6]) ? (arr_0 [1]) : 2063642004))) ? -116 : (((arr_3 [i_6] [i_6] [i_7]) ^ (arr_3 [i_7] [i_7] [i_6])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_18 = (min(var_18, (((max((min(var_5, 2231325293)), (arr_1 [i_8] [i_8])))))));
                    var_19 = (((arr_13 [7] [i_9] [i_9] [i_9] [i_9] [i_8]) ? (~var_4) : ((((var_6 < -116) ? var_2 : (arr_8 [i_8] [i_8] [i_9]))))));
                    var_20 = (arr_2 [i_8]);
                }
            }
        }
    }
    #pragma endscop
}
