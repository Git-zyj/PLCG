/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? var_18 : var_7));
    var_20 = (min(var_20, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 = (16485570656050050941 ^ 30770);
                            var_22 = ((((((arr_7 [i_2] [i_1] [i_0]) ? ((((arr_4 [i_3]) >= var_17))) : -var_18))) ? (arr_4 [i_0]) : ((((!-30773) > ((((arr_3 [i_3]) != var_8))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_23 = (arr_7 [i_0 + 3] [i_1] [2]);

                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                var_24 = (max(var_24, (((((((arr_12 [i_0 + 2]) >= (arr_11 [i_0 + 2])))) > ((((arr_3 [i_0 + 4]) > (arr_4 [i_0 + 1])))))))));
                                var_25 = (min(var_25, (arr_8 [i_6] [i_5] [i_1] [i_4] [i_1] [i_0])));
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                            {
                                var_26 = ((((30765 == (arr_1 [i_4 + 3] [i_0]))) ? (((~(arr_7 [i_0 + 4] [i_0] [i_0 + 4])))) : ((((var_15 > (arr_9 [i_4] [1]))) ? (arr_13 [3] [i_0] [i_0 + 2] [i_0] [i_4 + 3]) : var_15))));
                                var_27 = (min(var_27, (((((max(16485570656050050941, 4095)) ? ((var_16 ? (arr_5 [i_1] [22] [22] [i_7]) : var_9)) : ((((arr_15 [i_0] [i_1] [4] [i_1] [i_5] [i_7]) ? (arr_11 [i_7]) : (arr_4 [i_7]))))))))));
                                var_28 = 520663052;
                                var_29 = ((-1023 || (((arr_6 [i_4] [i_7]) >= -30789))));
                            }
                            var_30 = ((~(arr_0 [i_0])));
                            var_31 -= (((max((arr_12 [i_0 + 3]), var_0)) == (arr_3 [i_4 + 1])));
                        }
                    }
                }
                var_32 = ((~(27638 * -2048)));
                var_33 = (max(var_33, (~var_6)));
                var_34 = (min(var_34, (((30773 || (-9223372036854775807 - 1))))));
            }
        }
    }
    #pragma endscop
}
