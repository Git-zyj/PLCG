/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_8 ? var_0 : var_9)))) << (var_6 + 115)));
    var_12 = (var_8 ? var_9 : (var_3 / var_4));
    var_13 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = arr_4 [i_1] [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (!var_7);
                            var_16 = ((((!(arr_10 [9] [i_2] [i_1] [i_0])))));
                            var_17 = (arr_4 [i_0] [i_3]);
                            var_18 = (((arr_4 [i_0] [i_0]) ? var_1 : ((((arr_7 [i_0] [i_0]) * (arr_1 [i_1]))))));
                            var_19 = var_1;
                        }
                    }
                }
                var_20 = (((arr_7 [i_0] [i_1]) ? (!761777505) : ((((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) + 9223372036854775807)) >> (((((arr_0 [i_0] [i_0]) | (arr_10 [i_0] [i_0] [i_0] [i_0]))) - 12599675859275235536)))))));
            }
        }
    }
    #pragma endscop
}
