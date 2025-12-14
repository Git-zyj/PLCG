/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 *= -35496;
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_3] [i_4] [i_4] = (max((max((arr_3 [i_0 + 2] [i_1] [i_1]), (((var_1 ^ (arr_8 [i_2] [i_2])))))), (((!(arr_7 [i_2] [i_1] [i_4]))))));
                                arr_16 [i_0 + 2] [8] [i_0 + 2] [i_4] = ((((max(50, var_0))) ? ((~(arr_8 [i_0 - 1] [i_0 - 1]))) : var_9));
                                arr_17 [i_0] [i_1] [i_0] [15] [i_4] [i_4] = 0;
                            }
                        }
                    }
                    var_13 = 1924864910;
                    arr_18 [i_1] [7] = (max((max(44555, ((-694099694 ? var_7 : var_0)))), (((!var_5) / 3703280842493768445))));
                    var_14 = 4294967286;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_15 = (!52);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_16 = ((24970693 ? ((var_6 ? ((var_11 ? 6156 : 1924864910)) : (!var_3))) : ((((!(~var_10)))))));
                            var_17 += (((((((max((arr_22 [15] [i_5]), 59403))) ? 1 : (arr_19 [i_6] [i_7])))) && ((max(((var_3 ? 55828 : 44555)), (((arr_22 [i_6] [i_8]) & (arr_26 [i_5] [i_5] [i_5] [i_6]))))))));
                            var_18 = (-(((!(arr_29 [i_8 + 1] [i_8 + 3] [i_8 + 1] [i_5])))));
                            var_19 = var_5;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_20 = ((!((max(((((arr_22 [i_5] [11]) ? 127 : var_2))), (arr_30 [i_9 + 2] [i_9 - 1] [9] [i_9] [i_9 - 1]))))));
                                arr_38 [3] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((((((((!(arr_21 [i_11]))))) != (min(-1544913742521110723, var_4))))) == (arr_26 [16] [17] [i_10 - 2] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
