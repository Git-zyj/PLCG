/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_7 ? var_1 : (((4095 != ((var_3 ? var_1 : var_3))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0 + 1] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_14 = (arr_3 [8]);
                                var_15 = ((((arr_12 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) != (max((arr_13 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 2]), (arr_2 [i_1]))))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_16 = ((((min((arr_9 [i_1]), (arr_9 [i_1])))) ? (((arr_9 [i_1]) ? (arr_9 [i_1]) : (arr_9 [i_1]))) : (!63)));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] = (((((arr_14 [i_0] [i_1] [i_0] [i_0 - 2] [i_5] [i_0 + 1]) ? (arr_14 [i_1] [i_1] [i_2] [i_3] [0] [i_3]) : (arr_14 [i_0 - 2] [i_1] [i_1] [i_1] [i_3] [4]))) + (arr_13 [1] [i_0 - 2] [i_1] [i_0 - 2] [i_3] [0])));
                                var_17 = min((arr_1 [i_0 + 1]), (((arr_1 [i_0 + 1]) - (arr_1 [i_0 + 1]))));
                                arr_17 [i_1] [i_5] = (((max(((!(arr_5 [i_3] [i_0])), ((244 <= (arr_11 [i_3] [18] [i_2] [i_3]))))))));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_18 = (min(var_18, (((-1 ? 49 : 657425072068640675)))));
                                var_19 = (max((((((max(var_2, (arr_5 [i_0] [i_0])))) ? (arr_18 [i_1]) : var_6))), (((arr_8 [i_1] [i_3]) ? ((13231324044191191749 + (arr_8 [i_3] [i_3]))) : ((((!(arr_18 [1])))))))));
                            }
                            var_20 = (min(var_20, (min((arr_3 [i_0 + 1]), (min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))))));
                            var_21 = (min(var_21, (((-(min((arr_3 [i_0 + 1]), (var_3 + var_9))))))));
                        }
                    }
                }
                var_22 = ((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_1]) ? (arr_14 [i_0] [i_1] [i_1] [i_0] [5] [i_0]) : (((((var_10 / 27627) >= (arr_3 [i_1]))))));
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
