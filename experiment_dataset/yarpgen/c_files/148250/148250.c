/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((-(((arr_9 [i_0 - 1] [3]) * 0))));
                                var_21 = ((-1 >= (~var_12)));
                                var_22 += ((((arr_5 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]) | 29656)));
                            }
                        }
                    }
                    var_23 = (--84);
                    arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0] = (((min((var_6 == 29656), (8543 >= 29656))) ? 16 : (max((0 % var_14), (arr_5 [i_0] [i_1] [i_1] [i_2])))));
                    var_24 = (min(var_24, (((176 ? var_7 : 156)))));
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_25 += (((((((var_7 == (arr_2 [8]))) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_5 + 2])))) || (((~203852727) != (((!(arr_2 [i_1]))))))));
                    arr_15 [i_0] [i_1] = var_4;
                    var_26 = ((((((((-8023530830652790263 ? 2248 : 156))) ? (var_14 & -203852727) : (var_8 & -203852727)))) ? ((2267 ? ((-(arr_0 [i_1]))) : (((var_10 != (arr_9 [i_0] [i_1])))))) : ((((var_6 | 12) != ((-(arr_6 [i_1]))))))));

                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_27 ^= var_1;
                        var_28 = ((((~(arr_17 [i_6 + 1]))) > ((~(arr_17 [i_6 + 2])))));
                        arr_20 [i_1] [i_1] [i_0] = min((!var_16), (((0 + 0) + 203852727)));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_29 = ((var_13 ? var_8 : (arr_11 [i_7 - 1] [i_5] [i_5] [10] [i_5 - 2] [i_0 + 1])));
                        arr_24 [i_0 + 1] = var_2;
                        var_30 = (arr_22 [i_0 - 1] [i_1] [i_5 + 3] [i_7]);
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        var_31 = (((((0 ? var_4 : 0))) ? (arr_0 [i_8 + 1]) : (arr_16 [6] [i_8 - 1] [i_0 + 1] [i_8 - 1])));
                        var_32 ^= (8572260856139244858 - 2);

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_33 = ((var_10 | (2 == -203852727)));
                            var_34 = ((arr_2 [i_0 - 1]) | (~var_2));
                        }
                        arr_32 [i_5] &= (((arr_10 [i_5 + 1] [i_0 + 1]) != 4294967294));
                    }
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    arr_35 [i_10] = (((arr_9 [i_0 + 1] [i_0 - 1]) ? var_3 : var_16));
                    var_35 = (max(var_35, (((((((arr_31 [i_0] [i_1] [i_10 - 1] [i_1] [i_1]) | 17404848726319800107))) ? 127 : (arr_17 [i_10]))))));
                    var_36 |= var_3;
                    var_37 = ((var_17 ? var_0 : 176));
                    arr_36 [i_10] [i_0] [i_1] [i_10] = ((((108 ? var_16 : var_6)) - -var_16));
                }
                arr_37 [i_0] [i_0] [i_0] = 0;
                var_38 = (max(var_38, 1));
            }
        }
    }
    var_39 = ((var_4 - (((((var_3 ? var_14 : var_14)) + -var_18)))));
    #pragma endscop
}
