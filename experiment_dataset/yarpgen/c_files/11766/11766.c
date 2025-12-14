/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max((((!(((63 ? 737336882 : -1)))))), ((-(var_6 | var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = var_5;
                arr_4 [18] [i_1] [18] |= ((max((!var_10), (((arr_0 [2] [2]) ? var_2 : (arr_0 [6] [6]))))) % (min((((arr_2 [i_1] [i_1] [10]) ? var_5 : (arr_1 [2]))), (arr_0 [10] [i_1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (!(((-(arr_9 [i_0] [13] [i_0])))));
                                var_18 = ((((min(65522, 2894080461))) ? (max(((var_8 ? var_4 : (arr_5 [i_2] [i_1] [i_2] [i_1]))), (arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 - 1]))) : (min((var_0 | var_8), ((3503199988 ? 90 : -1))))));
                                var_19 = ((((((((var_9 ? (arr_3 [2] [i_3] [i_1]) : (arr_2 [i_0] [i_0] [i_0])))) ? var_10 : (((!(arr_1 [i_0]))))))) ? (min(((var_14 ? var_7 : (arr_11 [i_0] [i_1] [i_2] [i_3]))), (((-(arr_5 [i_0] [i_1] [i_0] [i_3])))))) : (((arr_10 [i_0] [i_1]) ? (~var_7) : (arr_10 [i_3] [i_0])))));
                                arr_12 [i_0] [i_0] [i_0] = ((var_9 ? (((arr_5 [i_0] [i_1] [i_3 + 1] [i_3 + 1]) ? var_1 : (arr_5 [i_3] [i_1] [i_3 - 2] [i_1]))) : (((arr_5 [i_1] [i_1] [i_3 - 2] [1]) ? var_11 : (arr_7 [i_0] [i_0] [i_3 - 2] [i_0])))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_20 = ((((max((((arr_8 [i_0] [5] [i_0]) ? (arr_9 [i_0] [i_1] [i_1]) : (arr_1 [i_0]))), ((((arr_6 [i_0] [i_0] [i_0]) > (arr_8 [i_0] [i_1] [i_0]))))))) ? (arr_14 [i_0]) : (((~var_11) ? var_13 : (((max(var_1, var_0))))))));
                    var_21 = ((-(arr_6 [i_0] [i_0] [i_5])));
                    var_22 -= var_3;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_23 *= (((var_5 ? (max(var_10, var_3) : var_10))));
                    var_24 = ((~((((arr_9 [i_0] [i_1] [i_6]) <= (((arr_9 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_17 [i_0] [i_0]))))))));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_7] = var_5;
                    var_25 = (max(var_25, ((((((791767307 >> (((arr_7 [20] [i_1] [i_1] [i_7]) - 19416))))) ? (((arr_7 [i_0] [i_0] [i_7] [i_7]) ? (arr_15 [i_0] [i_1] [i_7] [i_7]) : (arr_7 [i_0] [i_0] [i_0] [i_7]))) : var_4)))));
                    arr_22 [i_0] = (arr_0 [i_0] [i_1]);
                }
                var_26 = (((max((((15224413640064666176 ? 1 : 268435454))), (var_5 + var_12))) & var_12));
            }
        }
    }
    #pragma endscop
}
