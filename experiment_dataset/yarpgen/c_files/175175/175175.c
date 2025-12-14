/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(var_13, var_9))) + ((var_10 ? var_3 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 1] [i_0] = ((-(((((((arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 2]) > (arr_3 [i_0] [i_2]))))) ^ (317274611 + 3977692692)))));
                    var_15 -= (((((~(min((arr_1 [2]), var_0))))) ? ((((!(arr_1 [i_0 - 1]))))) : (arr_1 [i_0])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_16 ^= ((-(((!(317274631 * 3977692710))))));
                        var_17 = 3977692679;

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_18 = (max(((((arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_1 - 1]) == (arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])))), ((var_11 % (arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            arr_12 [i_0] [9] [i_2] [i_3] [i_0] [9] = ((!((max(((3977692722 ? 3977692698 : 317274596)), (!317274598))))));
                            var_19 -= (max((((arr_11 [i_1] [4] [i_3] [5]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_4 + 2]))), (~317274611)));
                            arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [i_0 - 1] |= ((((min((arr_4 [i_1] [i_1 - 1] [i_1 + 1]), (var_0 + var_9)))) < (arr_1 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_3] [0] &= ((-(arr_10 [8] [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1])));
                            var_20 = (min((((((min(var_11, (arr_0 [i_0])))) < (max(var_13, (arr_1 [i_1])))))), (((arr_11 [i_0] [i_1] [i_1] [i_0]) ? (arr_14 [i_0 + 2] [i_0 - 1]) : (!var_13)))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_21 = (min(var_21, (((((((var_12 % var_0) && var_4))) * (((!((var_4 != (arr_11 [i_0] [i_1] [i_2] [i_0])))))))))));
                            arr_20 [i_0] [i_6] = (~(!var_12));
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_0] [17] = (min(var_13, (((((!(arr_4 [i_0] [12] [i_2])))) - (min(var_1, (arr_16 [i_0 + 2] [i_1 - 1] [1] [17] [i_3] [i_6])))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_22 = (max(var_22, (((((max((max((arr_19 [15] [i_0] [i_2] [i_1] [i_1 - 1] [i_0]), var_6)), ((((arr_14 [i_0] [i_1]) < var_3)))))) || -var_7)))));
                        var_23 = ((((arr_14 [i_1] [i_1 - 1]) ? (arr_14 [4] [i_1 - 1]) : (arr_23 [i_1] [i_1 + 1] [i_7] [i_7]))) << (3977692700 + 317274596));
                        var_24 &= ((~(min((arr_23 [i_7] [i_7] [i_2] [i_7]), (arr_5 [i_7] [i_0 + 1])))));
                        arr_25 [i_2] [i_2] [i_2] [i_7] &= (min(var_5, ((((arr_1 [i_7]) >> (((min(317274592, 3977692695)) - 317274566)))))));
                        var_25 ^= var_2;
                    }
                }
            }
        }
    }
    var_26 |= ((((var_6 * (min(var_10, var_2)))) >= (max((~317274587), var_2))));
    var_27 *= ((var_2 >= (((~(min(317274611, 317274599)))))));
    var_28 |= ((~(max(var_4, var_0))));
    #pragma endscop
}
