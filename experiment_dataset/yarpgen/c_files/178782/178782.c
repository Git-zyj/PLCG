/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (max(((max(var_0, (!var_5)))), 1447121401));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (arr_6 [i_0] [5] [i_0]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] = min((arr_13 [i_3] [i_2] [i_2] [i_3]), (arr_11 [i_2] [i_2] [i_2] [i_2]));
                        arr_15 [i_2] [i_1] [i_1] [i_1] = ((~(((arr_0 [i_0]) ? (arr_13 [i_3] [i_2] [i_2] [i_0]) : (arr_0 [i_0])))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_13 *= (((arr_11 [i_0] [10] [15] [i_0]) ? ((+((1447121406 ? (arr_17 [13] [13] [i_4 + 1] [13] [i_4]) : (arr_8 [i_1] [i_0] [i_4]))))) : (arr_7 [i_0] [i_0] [i_0])));
                        arr_19 [i_2] = arr_5 [i_2] [i_2] [1] [1];
                        arr_20 [i_0] [i_2] [i_1] [i_2] [i_2] [i_2] = ((((((arr_8 [i_4 - 1] [i_2] [i_4 + 1]) ? (arr_8 [i_4 + 1] [i_2] [i_4]) : (arr_8 [i_4 + 1] [i_2] [i_4])))) ? (arr_8 [i_4 - 1] [i_2] [i_4]) : ((-(arr_8 [i_4 - 1] [i_2] [i_4])))));
                        var_14 = ((-(((!(arr_18 [i_0] [i_0] [i_0] [i_2]))))));
                        arr_21 [i_2] = (((arr_3 [i_0] [i_0] [i_0]) - (arr_5 [i_4] [i_2] [i_0] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            var_15 = (max(var_15, ((((arr_13 [i_6 + 3] [i_1] [i_1] [1]) ? (arr_23 [i_6] [i_6 + 1] [i_0] [i_6 + 1] [i_5]) : (((arr_16 [i_0] [i_1] [i_2] [i_5] [i_2] [i_1]) ? (arr_22 [i_1] [6] [i_2] [i_2] [i_2]) : (arr_6 [i_5] [i_5] [i_2]))))))));
                            arr_27 [i_2] [i_1] [i_2] [i_2] = (arr_10 [1] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_16 &= (arr_10 [i_1] [i_1]);
                            arr_31 [i_0] [18] [i_2] [i_2] [i_0] [i_5] = ((~((+(((arr_4 [i_0]) ? (arr_6 [i_1] [i_2] [11]) : (arr_8 [i_7] [i_2] [i_1])))))));
                        }
                        var_17 = (arr_8 [i_0] [i_2] [12]);
                        arr_32 [i_2] [i_1] [i_1] [i_0] [i_2] = -1;

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            arr_35 [15] [i_1] [i_2] [i_2] [i_2] [i_2] = (((((~(arr_6 [i_0] [i_1] [i_5])))) ? ((((~(arr_17 [i_8] [0] [i_2] [i_0] [i_0]))) * (((!(arr_6 [i_0] [i_1] [i_2])))))) : ((min((arr_4 [i_0]), (arr_5 [i_8] [i_5] [i_1] [i_0]))))));
                            arr_36 [i_2] [i_2] = 115;
                            var_18 = (+((+(((arr_8 [i_2] [i_2] [i_8]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1] [i_5]))))));
                        }
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_19 -= arr_34 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_9];
                            arr_40 [i_0] [i_1] [i_2] [i_1] [i_2] = 38;
                            arr_41 [i_1] [i_1] [i_1] [0] [i_2] [i_1] [i_1] = ((!(arr_17 [i_0] [i_0] [i_2] [10] [i_9])));
                        }
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_45 [i_2] [i_1] [i_2] [i_10] = (~38);
                        var_20 = ((((min((((-127 - 1) ? (arr_22 [i_2] [i_2] [i_2] [i_10] [i_10]) : (arr_3 [i_1] [i_2] [i_10]))), (arr_10 [i_2] [i_2])))) ? (arr_23 [i_0] [i_0] [i_2] [2] [i_10]) : ((max(255, (arr_4 [i_0]))))));
                        arr_46 [i_2] [i_2] [i_2] [12] [i_10] = (((((-(((arr_3 [0] [0] [i_2]) ? (arr_16 [i_2] [i_0] [i_0] [i_0] [i_2] [6]) : (arr_1 [i_0])))))) ? (arr_34 [i_10] [i_2] [16] [i_2] [i_0] [i_2] [i_0]) : ((((arr_8 [i_0] [i_2] [1]) % (((arr_29 [i_0] [i_0] [2] [i_0] [i_0] [2]) ? (arr_2 [i_0]) : (arr_8 [i_0] [i_2] [i_0]))))))));
                    }
                    var_21 |= arr_34 [i_2] [i_1] [i_2] [i_1] [i_2] [8] [i_2];
                    arr_47 [i_2] [i_2] [i_2] = (arr_7 [i_0] [i_0] [18]);
                }
            }
        }
    }
    #pragma endscop
}
