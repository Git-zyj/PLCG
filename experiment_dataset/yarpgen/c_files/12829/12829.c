/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0 + 2] [i_0] [i_2] [i_3] [i_4] [2] = (arr_6 [i_1] [i_1]);
                            var_19 = (max(var_19, 166));
                            var_20 = (min(var_20, (((((~(arr_2 [i_4]))) >= 102)))));
                            var_21 = (arr_11 [i_2]);
                            arr_15 [i_0] [i_3] [i_2] [i_3] [9] = ((!(arr_5 [i_0 - 2] [i_4] [i_4 - 2])));
                        }
                        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] [6] [3] [i_3] [9] [i_3] |= (arr_11 [i_0]);
                            arr_21 [i_0] [1] [i_0] [i_0] [i_0] [8] [i_0] = (arr_7 [1] [i_1] [i_5]);
                            var_22 = (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1]);
                        }
                        var_23 = ((((min((arr_16 [i_0] [i_1] [i_1] [i_1] [i_3]), (((!(arr_3 [i_1] [15]))))))) ? ((-(73 != -103))) : (max(var_0, ((-103 ? 42 : -517341564))))));
                        var_24 = ((((~((-(arr_0 [i_0] [i_0]))))) == (((1 ? (arr_4 [i_1] [i_3]) : (max(var_17, (arr_18 [i_0] [i_0] [i_1] [i_2] [i_2]))))))));
                        arr_22 [i_0] [i_1] [i_2] = (arr_17 [i_0 + 1] [i_1] [i_1] [i_3] [i_3]);
                        arr_23 [19] [10] = var_0;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = (((((1 ? -4306615984035548953 : 4306615984035548942)) >= (arr_9 [i_0]))));
                        arr_26 [5] [i_1] [i_2] [i_6] = 0;
                        arr_27 [i_2] [2] [i_2] [i_6] [i_0] [i_1] = ((1 + (((!(((var_2 ? var_17 : (arr_0 [i_1] [i_2])))))))));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_26 = (((arr_10 [i_0] [i_1] [i_6] [i_7 + 1]) ? (arr_6 [i_0] [i_7 - 2]) : ((4306615984035548952 ? 102 : -1705658712))));
                            arr_30 [i_2] [i_2] = 1;
                            var_27 = ((-(arr_25 [i_0] [i_1] [i_1] [i_6])));
                            arr_31 [i_0] [i_0] = (57 >= 34);
                        }
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        arr_36 [19] [19] [i_1] [i_1] [i_2] [i_8] |= (((var_4 / 1) ? ((-(arr_25 [i_0] [i_1] [i_8 + 2] [i_0 - 1]))) : ((64 >> (((((arr_7 [i_8] [i_2] [i_1]) ? 206 : (arr_11 [i_1]))) - 198))))));
                        var_28 = (arr_24 [i_0] [i_0] [i_0 - 1] [i_0]);
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        arr_40 [i_9] = var_9;
                        arr_41 [2] [i_1] [i_1] = ((((~(arr_9 [i_0 + 2])))) ? (arr_18 [i_0 - 1] [i_0 - 1] [13] [i_9 + 3] [i_9]) : ((~(arr_9 [i_0 + 1]))));
                        arr_42 [i_0] [i_0] [i_9 - 1] |= 56066;
                    }

                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_0] [18] [3] = (arr_25 [i_0] [i_1] [i_2] [i_10]);
                        arr_46 [0] [i_2] [i_0] [i_0] [0] [i_0] = ((!(((arr_10 [i_0 - 1] [i_1] [13] [12]) && var_5))));
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = -185;
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_29 ^= (min((((!(((arr_16 [i_11] [i_2] [i_2] [i_0] [i_0]) > (arr_9 [i_2])))))), ((63 ? 102 : 660891490))));
                        arr_50 [i_11] [15] [i_11] [i_11] = (((arr_12 [i_0] [i_0] [i_2] [i_11]) + 52804));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_54 [14] [i_1] [20] |= var_12;
                        arr_55 [i_1] [i_2] [i_1] [1] = (((((max(4139143595, (arr_8 [i_0] [i_1] [i_2] [i_12]))))) ? 3 : (arr_8 [i_12] [i_2] [i_1] [13])));
                        arr_56 [i_0] [i_12] = ((((((arr_0 [i_0 - 2] [i_0 + 2]) ? (arr_13 [i_0 - 2] [i_1] [i_0 - 2] [3] [i_1] [5]) : (arr_0 [i_0 + 2] [i_0 + 2])))) ? (arr_0 [i_0 + 1] [i_0 - 2]) : 145));
                        var_30 = (((arr_3 [i_0] [i_0 - 2]) ? var_17 : (((arr_3 [i_0] [i_0 - 2]) / (arr_3 [i_0] [i_0 - 2])))));
                    }
                    var_31 ^= (!var_10);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {
            {
                var_32 = 2743258393;
                var_33 &= (((((var_0 ? (arr_8 [i_13] [i_14 + 1] [i_13] [i_13]) : (arr_57 [9] [i_14 + 1])))) ? (min((arr_9 [i_13]), ((19823 ? var_6 : var_14)))) : (!193)));
                var_34 = (54541 && 1181846271);
                arr_62 [i_13] = 1455098454;
            }
        }
    }
    #pragma endscop
}
