/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_6, -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((((arr_3 [i_0] [i_0]) ? -328718776 : 5896577114724052810))) ? (((arr_0 [i_0] [i_1]) ? var_9 : var_5)) : ((((arr_1 [i_0]) ? (arr_3 [i_0] [i_0]) : 28294)))))) ? (73 & var_0) : var_9);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (var_0 | 22086);
                                var_14 = (var_1 & (arr_2 [i_0] [i_1]));
                            }
                        }
                    }
                    var_15 = (((arr_9 [i_0] [i_1]) >= (arr_9 [i_2] [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_16 = (((1 ? 117 : var_10)));
                    var_17 = var_6;
                }
            }
        }
    }
    var_18 = ((var_11 ? var_7 : ((1042236565495212662 * (0 > 8426678062217909822)))));
    #pragma endscop
}
