/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_14) < (var_16 - var_9)));
    var_21 = ((var_18 % (((var_15 ? var_19 : (!var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((max((max((arr_5 [i_1 - 1] [i_1 - 2]), 982539213613634281)), ((((arr_5 [i_1 - 1] [i_1 - 2]) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 - 2])))))))));
                    var_23 = ((((40 ? (arr_5 [i_0] [i_0]) : var_17))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_24 ^= (max(549755551744, (((max(var_7, var_4)) & (((min(var_14, 40))))))));
                                arr_12 [i_0] [i_3] [i_2] [2] [i_0] = ((((((arr_4 [i_0]) << (arr_4 [i_0])))) ? (!var_17) : 18446743523953999866));
                                var_25 = 549755551744;
                            }
                        }
                    }
                    var_26 = (((((549755551724 ? -42 : ((max((arr_4 [i_0]), var_19)))))) ? (max(410865110212850314, ((249 ? (arr_2 [i_0]) : (arr_10 [i_0] [i_1] [i_0] [i_2] [i_0]))))) : ((57149 ? ((7728133865986292749 % (arr_8 [i_0] [i_1] [i_1] [3]))) : (((~(arr_7 [i_0] [i_0] [i_1] [2] [i_2] [i_0]))))))));
                    var_27 = (((arr_7 [i_1] [i_0] [10] [i_1] [i_1] [i_2]) ? (max(((max((arr_2 [i_2]), (arr_7 [i_2] [i_2] [i_2] [i_0] [i_0] [i_2])))), ((1 ? (arr_2 [9]) : 65535)))) : (((((9700 != (arr_6 [i_0] [i_1] [i_0]))) ? var_4 : ((var_19 ? 0 : 255)))))));
                }
            }
        }
    }
    #pragma endscop
}
