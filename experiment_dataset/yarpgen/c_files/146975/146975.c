/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((-((min(var_7, var_4)))))), (((!var_9) ? (min(var_4, -3388389058007350115)) : (!var_11)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [23] = ((~(arr_1 [i_0] [5])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (((((-(arr_13 [i_1] [3] [i_2 - 1] [i_1])))) ? 26979 : (((arr_13 [i_1] [18] [23] [i_1]) ? (arr_13 [14] [i_4] [i_2 - 1] [i_1]) : (arr_13 [i_1] [i_3] [i_2] [i_1])))));
                            arr_15 [i_1] [1] [3] [i_1] = ((~((~(arr_3 [i_1] [13] [i_1])))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_17 &= (((arr_5 [i_1]) ? (((!(arr_9 [i_0])))) : (((!((((arr_6 [i_2 + 1] [8]) | 992))))))));
                            var_18 = 1144889627;
                        }
                        var_19 = ((~((((((arr_17 [i_0] [i_0] [8] [3] [13]) ? var_12 : -11390))) ? ((((arr_0 [i_0]) || (arr_6 [2] [2])))) : ((min(var_8, (arr_1 [i_0] [11]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    arr_22 [i_0] [i_6] [i_6] = (((((arr_12 [i_0] [1] [1] [i_6]) ? -8666529048184419869 : var_5))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_20 = var_12;
                                arr_28 [i_0] [22] [i_0] [17] [i_0] = ((((!(arr_7 [i_0] [i_0]))) ? (!var_11) : (arr_20 [i_0] [i_0])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_6] &= (~var_9);
                            var_21 = (((arr_16 [i_0] [i_6] [i_6] [i_7 - 2] [i_11]) ? (arr_17 [i_0] [i_0] [1] [i_7 - 2] [14]) : (arr_17 [14] [i_6] [i_7] [i_7 - 2] [i_11])));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_22 = ((!(arr_34 [i_6] [22] [i_6] [12] [i_10 + 2] [i_12] [i_12])));
                            arr_36 [i_7] [i_10] [i_7] = (arr_5 [i_7 + 1]);
                            var_23 = ((!(!var_0)));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_24 &= ((!(!var_10)));
                            arr_39 [i_10] [18] [i_7 - 2] [i_7] [i_7 + 1] = ((~(arr_9 [i_7 + 1])));
                        }
                        arr_40 [i_0] [i_0] [20] [i_7 - 1] [i_6] &= ((!(arr_21 [i_7 - 2] [i_7] [i_7 - 2] [i_7])));
                    }
                    arr_41 [i_6] [i_6] [i_6] = min(((14145 ? 9909636883731579382 : 45638)), (((!(((26979 ? (arr_4 [i_6] [2] [i_7]) : -23964)))))));
                }
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
