/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((((((arr_1 [i_0]) <= (arr_5 [i_1] [i_0]))) ? -1 : (max(3365064347359213395, (arr_2 [1] [i_1])))))) ? (((((var_14 ? var_7 : 8665760899260637469))) ? ((-1 ? -114 : -1)) : var_7)) : ((((((min(var_14, (arr_1 [10])))) + 2147483647)) >> (!var_2))))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = var_13;
                                var_18 = (((((((max((arr_1 [i_2]), var_15))) / (((arr_5 [i_0] [i_0]) ? (arr_7 [4] [13] [2]) : 8226934620484497008))))) && (3877343916 != var_2)));
                                var_19 = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_20 = (((((2047 >> ((((arr_0 [11]) || (arr_9 [i_0] [i_2] [5] [i_0]))))))) ? (((arr_10 [i_0] [i_0] [i_2] [i_0] [i_2]) ? ((var_7 / (arr_3 [i_2] [7]))) : var_5)) : (arr_2 [13] [i_2])));
                        var_21 = (min(((((((arr_5 [i_0] [0]) ? -31533 : var_3))) ? -var_15 : ((var_4 ? var_14 : var_12)))), ((((((arr_6 [i_5 - 1]) && (arr_13 [i_0]))) ? (!16316546380154648580) : -27220)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_22 = (((arr_16 [2] [2] [i_6] [i_6] [i_6 + 1] [i_2]) ? (((arr_18 [i_0] [i_2] [i_0] [i_0]) * 0)) : (arr_12 [i_0] [i_0] [i_0] [i_0] [2] [i_2])));
                        var_23 = (max(var_23, (arr_4 [i_0])));
                    }
                    var_24 ^= ((((((arr_0 [i_1]) ? -20 : (arr_0 [i_1])))) ? (((arr_0 [i_0]) ? (arr_0 [i_2]) : (arr_0 [i_2]))) : (min((arr_0 [i_0]), (arr_0 [i_0])))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_7] [i_7] [i_0] = ((((!(arr_12 [i_7] [i_1] [i_1] [i_1] [i_0] [i_7]))) ? (((+((((arr_14 [i_0] [i_7] [i_0] [i_1]) > var_1)))))) : ((+(max((arr_6 [i_7]), var_1))))));
                    var_25 = (min(((((min((arr_19 [i_0] [8] [i_0] [i_0]), (arr_16 [i_7] [i_1] [i_0] [i_1] [5] [i_7])))) ? -var_2 : ((var_3 ? var_2 : 10)))), (((min((arr_0 [i_0]), (arr_2 [i_0] [9])))))));
                    var_26 = (((var_9 ? (min(1, var_1)) : (((((arr_5 [1] [i_7]) == var_8)))))));
                }
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
