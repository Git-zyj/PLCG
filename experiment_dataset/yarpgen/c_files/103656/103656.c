/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_16 | (((var_2 ? var_2 : var_10))))) << ((((((min(var_5, var_15))) | (63 & 12))) - 13))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_18 = var_4;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((min(((min(((-(arr_11 [i_4] [7] [11] [i_2] [11] [i_1] [i_0]))), ((var_9 ? var_1 : var_10))))), (max(((max(0, var_4))), (arr_9 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2]))))))));
                            var_20 = (min((~4294967286), (min((!var_11), (((arr_8 [i_4] [i_3] [i_2] [i_1]) ? var_11 : var_16))))));
                            var_21 = (((arr_4 [i_3 + 1] [9] [i_2 + 1]) << var_2));
                        }
                    }
                }
            }
            arr_12 [i_0] [7] = ((-(~var_14)));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_22 = var_13;
            var_23 = (((~var_1) ? (arr_10 [i_0] [4] [i_0] [i_5]) : ((var_9 ? (arr_10 [i_0] [i_0] [i_5] [i_0]) : var_3))));
        }
        arr_16 [i_0] = ((~(max((min(var_15, var_13)), (((var_10 ? var_12 : (arr_6 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_24 |= 4294967295;
        var_25 = (min(var_25, (((((((min(var_10, 4294967286))) ? (!var_6) : ((var_5 ? var_1 : var_16))))) && ((((!8191) ? (arr_19 [i_6]) : ((min(65535, (arr_10 [i_6] [17] [i_6] [i_6])))))))))));
        var_26 = (max(((-((0 ? 4294967287 : var_5)))), var_5));
        var_27 = (arr_11 [i_6] [i_6] [i_6] [i_6] [15] [15] [i_6]);
        var_28 = (max(var_28, var_1));
    }
    #pragma endscop
}
