/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [16] [14] [i_0 + 4] &= var_2;
                    arr_9 [i_0] [i_0] = (arr_3 [19] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] = (((min(var_10, -var_6)) / ((max((~1161662792), var_11)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_13 = (((~(((arr_0 [i_3]) | var_10)))));
                                var_14 *= (~((~((~(arr_23 [i_7] [i_6] [i_4] [i_4] [i_3]))))));
                                arr_24 [i_7] [i_6] [i_3] [i_3] [i_4] [i_3 + 1] = (max((((2847437044 ? (arr_21 [i_3]) : (arr_5 [i_3] [i_3] [i_3 - 1])))), (((arr_5 [i_3 - 2] [i_3] [i_3 - 1]) ? (arr_0 [i_3]) : (arr_14 [i_3 + 1] [i_3] [i_3 - 2])))));
                            }
                            arr_25 [i_6] [i_6] [i_6] [4] [i_3] = (((((((arr_23 [i_3] [i_4] [i_5] [i_6] [i_6]) ? (arr_15 [i_3] [i_5]) : (arr_13 [i_3]))) + (arr_6 [i_5])))) ? 2847437044 : var_2);
                        }
                    }
                }
                var_15 -= ((2847437044 ? var_1 : (arr_1 [4])));
                arr_26 [i_3] = ((((((arr_2 [i_3]) ? var_6 : (arr_0 [i_3])))) && (((+((((arr_5 [i_3 - 1] [i_3] [16]) || (arr_1 [i_3])))))))));

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        arr_31 [i_9] [i_3] [i_8] [i_4] [i_3] [5] = 1447530258;
                        arr_32 [i_3] [i_8] [i_8] [i_3] = ((-(!var_3)));
                        var_16 = -var_9;
                        var_17 -= arr_13 [2];
                    }
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        var_18 *= (~-1447530254);
                        arr_35 [i_3] [i_4] [i_3] = ((var_3 >= ((((2847437044 && (arr_27 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_10 - 2])))))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_19 += ((min(var_4, -1447530246)));
                            var_20 = (((((216451506 ? 988012186 : ((6057781730409883931 ? 324187293 : 8388))))) && (((arr_28 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_3 + 1]) != var_11))));
                            var_21 *= (((arr_3 [i_3] [i_3 - 1]) | (max(((~(arr_2 [10]))), var_3))));
                        }
                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            var_22 += max((max((((arr_4 [i_13] [i_8 + 1] [3]) + var_2)), (arr_36 [i_3] [i_3] [i_3] [i_3 + 1] [i_8 + 1] [i_3]))), ((((-8388 && (arr_30 [i_13 - 1] [i_11] [i_11] [4] [i_4] [i_3]))))));
                            var_23 = 1447530251;
                            var_24 -= var_2;
                            arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = 1447530232;
                        }
                        var_25 &= (((arr_19 [i_4] [i_4] [i_4] [0]) ? -var_11 : (max(((max(var_9, -8389))), (min(var_12, (arr_42 [i_11] [8] [8] [i_4] [i_3])))))));
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_26 = ((((-(((arr_5 [i_14] [i_3] [i_4]) % (arr_6 [i_8])))))) ? ((((!(arr_2 [i_3]))))) : (max((arr_36 [8] [i_14] [i_8] [i_8] [i_4] [i_3]), (var_6 <= var_0))));
                        arr_46 [i_3 - 1] [i_4] [i_8] [i_3 - 1] [i_3 - 1] [i_3] = (min(var_10, (((!(((var_2 + (arr_44 [i_4] [i_4] [i_8])))))))));
                    }
                    arr_47 [i_8 - 1] [i_3] [i_3] [i_3] = ((((-(var_6 | var_12))) >= ((min(((((arr_4 [23] [6] [i_3 - 2]) >= var_2))), (((arr_3 [i_4] [i_8]) - -8389)))))));
                }
            }
        }
    }
    #pragma endscop
}
