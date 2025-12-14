/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (max((arr_4 [17] [i_2 - 1] [11]), (min(var_11, (arr_4 [9] [i_2 + 2] [1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [7] [10] [i_3] = (min((((((var_3 ? var_11 : (arr_10 [6] [5] [i_3] [5] [2])))) ? var_12 : (((arr_11 [2] [13] [5] [i_3]) ? var_5 : 3237594836)))), (~var_12)));
                                var_18 += ((-((((min((arr_4 [10] [5] [6]), (arr_5 [16] [12])))) + (!var_16)))));
                                var_19 = ((~((((((arr_2 [17]) && (arr_10 [5] [6] [i_3] [2] [11]))) && var_16)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_18 [7] [i_6] = (((((var_1 ? var_15 : (arr_10 [17] [14] [i_6] [i_6] [9])))) ? (((arr_5 [6] [i_5]) ? (arr_10 [i_5] [17] [i_6] [3] [2]) : var_2)) : ((var_13 ? (arr_10 [17] [0] [i_6] [13] [2]) : var_9))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = ((((var_2 ? (arr_23 [3] [11] [6] [i_6] [i_7 + 1] [2]) : (arr_23 [5] [13] [1] [i_6] [i_7 + 1] [6]))) == (max(var_6, ((15402770557795536347 ? 5137729656738051133 : 15402770557795536360))))));
                            arr_24 [i_6] = var_4;
                            var_21 = (min(0, ((((((173 ? 9115318245102600966 : 3043973515914015269))) || 0)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_22 -= (min(((max((arr_28 [6] [19] [1]), ((((arr_31 [23]) - var_8)))))), ((~(min(2147483647, var_11))))));
                            var_23 = (((min(((var_0 ^ (arr_27 [18] [10]))), var_13)) <= (max(-4781704138829126499, 15402770557795536347))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_24 = (((!((((arr_34 [7] [18]) ? 12 : var_6))))) ? (arr_30 [7]) : var_5);
                            var_25 = (((((var_13 / (((arr_36 [16] [10] [12] [1]) ? (arr_30 [19]) : var_5))))) ? (((min(20090, 246)))) : 12));
                            var_26 = ((((-(min((arr_25 [17] [6]), (arr_31 [18]))))) ^ ((((!(~var_13)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
