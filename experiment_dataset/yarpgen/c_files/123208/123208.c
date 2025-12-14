/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max(-32753, (arr_1 [i_0])));
                arr_5 [22] [i_0] = (255 & 8191);
                arr_6 [i_0] [i_0] [i_1] = (min(((-32730 ? (arr_4 [i_1]) : (arr_1 [i_0]))), ((max((arr_4 [i_0]), 10940)))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_19 = (max(((((arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 2]) || (((arr_4 [i_1]) < (arr_0 [i_2])))))), ((((min((arr_2 [i_0]), -1))) ? var_13 : (arr_2 [i_0])))));
                    arr_9 [i_0] [i_0] [i_1] &= 31513;
                    arr_10 [i_0] [i_0] [i_0] [i_1] = var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_19 [i_3] = (max((max(var_8, var_10)), ((max((arr_4 [i_3]), var_4)))));
                var_20 = ((9510 ? 194 : 9));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_27 [i_3] [16] [i_5] [i_5 - 3] [i_5] = (max((!1322977148), ((var_7 - (arr_24 [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 2])))));
                            arr_28 [i_3] [i_4] [i_4] [i_5 - 2] [i_5] [9] = ((!(((((var_9 ? 93 : 1))) || ((max(1, -10941)))))));
                            arr_29 [i_3] [i_4] [i_4] [i_5 - 3] [i_3] = var_17;
                            arr_30 [i_3] [i_4] = ((((!var_15) ? (((var_6 ? var_7 : var_15))) : ((var_10 - (arr_3 [i_4] [i_4]))))) + (max((arr_16 [i_3] [i_4] [i_5]), 3671169701566913719)));
                        }
                    }
                }
                var_21 = (min(var_21, ((max(65535, 0)))));
                var_22 = ((((min(((((arr_3 [i_4] [i_4]) >= var_9))), (arr_14 [i_3])))) ? var_16 : (arr_3 [i_4] [i_4])));
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
