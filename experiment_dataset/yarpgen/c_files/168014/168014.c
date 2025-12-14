/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-var_11 ? 2450049037283182947 : (8844150100894563618 + -var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((((((((arr_2 [i_0] [i_3]) ? var_9 : 0))) + ((var_10 ? var_5 : -4))))))));
                            var_14 = (max(var_14, 7));
                        }
                    }
                }
                var_15 -= ((max((arr_4 [0] [i_1] [i_1] [i_1]), 0)));
                arr_9 [23] [i_1] = (((arr_0 [i_1] [i_1]) ? (!var_6) : (arr_0 [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_16 = 3747972808406336744;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_17 = var_2;
                            var_18 = (!0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
