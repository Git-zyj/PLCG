/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (!var_9)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((((((!(arr_2 [i_0 + 2] [i_1]))) ? (max(var_5, (arr_4 [i_0] [i_0]))) : (((var_9 & (arr_0 [i_0]))))))) ? ((~((var_8 ? (arr_0 [i_0 + 1]) : var_15)))) : var_2));
                arr_6 [i_0 + 2] [i_0] [i_0] = (((1 ? 913409436 : 660893430998720428)));
                var_19 = (min(var_3, (((!(arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = ((362666145 ? var_10 : ((((max(var_9, (arr_2 [i_0] [i_1])))) + (((arr_2 [i_3] [i_1]) + (arr_10 [i_2] [i_2] [i_1] [i_0 + 1])))))));
                            var_21 += (arr_8 [i_0]);
                            var_22 = (min(var_3, (((~(0 | 1))))));
                            var_23 |= ((~(1 < 14)));
                        }
                    }
                }
                var_24 = ((((arr_2 [i_0] [i_0]) ? ((max(var_4, var_8))) : ((254 << (138 - 133))))));
            }
        }
    }
    var_25 = ((var_9 >> (((((9223372036854775807 ? 264 : var_13))) ? 7 : var_8))));
    var_26 = var_15;
    #pragma endscop
}
