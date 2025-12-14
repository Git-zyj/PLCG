/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_9 ? var_13 : var_1)) ? (~var_5) : 59)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_19 ^= (min((min(var_10, ((max(var_4, (arr_12 [i_1] [i_1] [i_1] [i_1])))))), (((((var_8 ? var_11 : (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2]))) == var_15)))));
                        var_20 |= (arr_1 [i_0]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((((-var_5 % (arr_8 [i_0] [i_1] [i_2] [i_2])))) ? ((-1027261084 ? (arr_4 [i_0] [i_1]) : var_13)) : ((((((arr_4 [i_0] [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3]) : 1027261084)))))));
                        arr_14 [6] [6] [i_2] [i_3] = (min(-32768, ((1027261084 ? -1024 : var_17))));
                        var_21 = ((-2147483647 << (((arr_0 [i_0]) & (arr_0 [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_22 |= min((min((min(var_10, var_7)), (arr_2 [i_2]))), (arr_7 [i_2] [i_1] [i_0]));
                        arr_17 [i_4] [i_2] = ((((((arr_0 [i_2]) + 1023))) && 48));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 = ((~(var_7 || var_5)));
                        arr_20 [i_0] [i_1] [i_2] [i_2] = var_16;
                        var_24 = (min(var_24, ((((((var_3 ? var_2 : var_5))) ? (arr_11 [i_5] [i_0] [i_0] [i_0]) : 1130344052)))));
                        var_25 += (~63166);
                        var_26 *= (arr_6 [0] [i_1] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_6] [15] [i_2] [i_0] = (min(((var_16 || ((max((arr_0 [i_0]), var_11))))), (((arr_11 [i_0] [i_1] [i_1] [i_0]) <= (var_10 | var_9)))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_27 = (arr_8 [i_7] [i_7] [i_2] [i_6]);
                            arr_28 [i_0] [i_0] [i_6] [i_2] [i_6] [i_7] = var_17;
                            var_28 -= ((-(((arr_7 [i_0] [i_1] [i_2]) / -9921))));
                        }
                        var_29 = (arr_1 [i_6 + 3]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_30 = (min((min((var_9 + var_15), -1027261084)), var_7));
                                var_31 *= (((var_17 < var_12) && (arr_25 [i_0] [i_8 - 1] [i_8] [i_8 - 3] [i_8 - 2])));
                            }
                        }
                    }
                    var_32 = ((+((-17080 ? (arr_9 [i_0] [i_0] [i_0]) : 58361))));
                }
            }
        }
    }
    var_33 = (max(var_33, (~var_17)));
    #pragma endscop
}
