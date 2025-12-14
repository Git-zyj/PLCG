/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((min(717134229, 4294967295))) ? -var_5 : 717134229));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 -= (3577833061 / 1978587581313522758);

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_7 [i_2] [i_1] [i_2] [i_1] = (min((((min(23545, -897806958)) / 75)), (arr_3 [i_0])));
                var_14 = (((((arr_0 [i_2]) / (arr_5 [i_2] [i_1] [i_0]))) - (arr_0 [i_2])));
            }
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_15 = (arr_4 [i_3] [i_3] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_16 = (max(var_16, (((var_9 & (min((arr_2 [i_0]), (arr_12 [i_4 + 2] [i_4 + 3] [i_4] [i_4] [i_4] [i_4 + 2]))))))));
                        arr_15 [i_0] [i_4] [i_4 + 1] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_5]);
                        arr_16 [i_0] [i_3] [i_3] [8] [i_4 - 3] [i_5] = -7375;
                    }
                }
            }
        }
        var_17 |= (min(6849, (((((-(arr_3 [0])))) ? var_3 : (min(1614164056, 155))))));
        arr_17 [i_0] [i_0] = var_1;
        var_18 = 1244372716;
    }
    var_19 = ((((((~var_2) ? (min(-1917189093, 717134231)) : (!var_9)))) ? ((var_6 ? (min(var_6, 717134229)) : 36684)) : ((((!(((1833995006 ? 2874881855299641443 : var_9)))))))));
    var_20 = (min(-1917189093, (max(var_8, var_3))));
    var_21 = (((((var_5 ? 141 : 1577508082)) <= 171)));
    #pragma endscop
}
