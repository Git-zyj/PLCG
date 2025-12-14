/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_0 ? 998187534 : ((max(var_12, var_8)))));
    var_16 = (8599533340956004340 >> 1);
    var_17 ^= 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_1] [i_2] [11] [3] = ((max((arr_10 [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_0]), (arr_3 [i_2]))));
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_0] [i_2] [i_4] = ((-(1 == 1)));
                            }
                        }
                    }
                    arr_14 [i_2] [10] = 1;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_18 ^= (((((var_5 ? var_9 : var_7))) ? var_2 : (min(var_2, ((var_10 ? 1 : (arr_8 [i_0] [i_2] [i_0] [i_0])))))));
                        var_19 += (~4033915368);
                        var_20 += 4294967295;
                        arr_18 [i_1] = ((max(var_5, 1)));
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((((((-(arr_8 [i_0] [i_2] [i_1] [i_0])))) ? (max(-1680533048, (arr_4 [i_2] [i_2] [i_1]))) : var_8))), (max((max(var_7, 1)), var_13))));
                        var_21 = (((var_1 ? (min(var_0, 1)) : (4093438819 << 1))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1 + 1] [i_2] [i_7] [i_2] = max(var_12, (min(var_1, var_13)));
                        var_22 ^= (((((-809213898 ? 965330477 : (arr_25 [1] [i_1 + 1] [i_2])))) ? (arr_25 [i_0] [i_1 + 1] [i_2]) : (var_2 && 13510798882111488)));
                        arr_27 [i_0] [i_0] [5] [1] = ((((max(var_4, (!var_8)))) || ((max((min(var_1, var_6)), (max(var_9, var_4)))))));
                        arr_28 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = (((!2747131654) ? var_0 : ((((var_12 > (arr_16 [i_1 - 1])))))));
                        arr_29 [12] [i_7] [i_2] [i_0] [i_0] = (max(var_2, ((max(6144, 30720)))));
                    }
                    arr_30 [i_2] [i_1] [i_1] &= ((((!(!var_3))) ? (!var_12) : -var_9));
                }
            }
        }
    }
    #pragma endscop
}
