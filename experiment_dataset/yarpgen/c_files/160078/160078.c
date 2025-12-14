/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_20 ^= ((((((var_2 ? (arr_1 [i_0]) : var_8)) & -15048)) | (((((max(var_14, var_13))) ? -var_15 : (var_10 && -16809))))));
                arr_6 [i_0] [i_1] [i_1] = (((var_12 & var_2) ? ((((min(var_2, var_3))) ? (arr_5 [i_0]) : ((15048 % (arr_5 [i_0]))))) : (((((-(-127 - 1)))) / (min(134217727, 65535))))));
                arr_7 [i_1 - 3] [i_0] = (((((2350892339 || (((1 ? 34423 : 2147483645)))))) >> (var_16 - 4552)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_21 |= (min((((var_7 ^ var_18) ? (max(var_3, var_16)) : var_2)), (~var_12)));
                            var_22 = (max(8388352, ((1 ? 16978 : (min(2027547914, -31))))));
                            var_23 *= (var_18 + 2965972589);
                            var_24 &= ((((((9289 ^ var_0) >> (2027547914 - 2027547910)))) || ((max((var_4 >> 19), (arr_8 [i_3 - 1]))))));
                        }
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            var_25 = (min(var_25, ((min((max(0, var_1)), (1 || 1))))));
                            arr_25 [12] [12] [i_2] [i_2] [i_2] |= (min(((max((arr_19 [i_5] [i_5] [i_4 + 2] [i_3 + 2]), (arr_19 [i_2] [i_3 + 1] [i_3 + 1] [i_3 + 3])))), (((((var_7 ? (arr_9 [i_2] [i_3]) : var_8))) ? (!var_5) : var_19))));
                            var_26 &= ((-(min((7192 < var_16), (min(var_10, 1))))));
                            arr_26 [i_2] [i_4] [i_5 - 1] [i_7 - 3] = ((var_9 == ((var_17 ^ (arr_15 [i_2] [i_3 - 1])))));
                        }
                        var_27 -= (max(((((max(127, (arr_16 [i_2] [i_2] [i_4] [i_5])))) ? (((arr_13 [i_2] [i_3]) & var_11)) : var_16)), var_3));
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_28 = var_17;
                        arr_30 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3 + 1] = var_12;
                    }
                    var_29 ^= (max((((((-(arr_12 [i_3])))) ? (((var_17 ? var_5 : var_13))) : (7198478026408888681 / 18446744073709551594))), ((((max((arr_15 [i_2] [i_2]), var_10))) ? (max(var_12, var_3)) : var_11))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {

                            for (int i_11 = 3; i_11 < 12;i_11 += 1)
                            {
                                var_30 &= min(-15048, 18446744073709551602);
                                arr_39 [i_2] [i_3] [i_9] [i_2] [i_3] = ((((max(((min(var_1, var_19))), ((var_18 ? var_4 : 1))))) ? var_17 : (((-((19 ? (arr_32 [i_2] [i_3] [i_3]) : 1559315955)))))));
                            }
                            arr_40 [i_2] [i_3] [6] [i_10 + 1] [i_10 + 1] [i_10] &= (((((((((4294967295 > (arr_14 [i_2] [i_2]))))) * var_11))) ? ((var_10 ? 4294967295 : (arr_38 [i_2] [i_9] [i_10 + 1] [i_3 + 3] [i_10] [i_9]))) : ((~((var_5 ? var_10 : var_3))))));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_2;
    #pragma endscop
}
