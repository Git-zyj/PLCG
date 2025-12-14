/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(((min(-3429736193796413722, 172))), (min(var_15, var_17)))) % (((var_15 ? var_2 : (!255))))));
    var_21 = ((var_9 != (889522345 == -100)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = min((min((arr_2 [i_0] [i_1] [i_0]), var_12)), (((!(arr_2 [i_1] [i_1] [i_0])))));
                var_23 = ((max(3361256977, 2956778781096696351)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_24 = (((((1402175096 ? 151 : 3))) ? (((arr_9 [i_3] [i_3] [i_2] [i_0] [i_4] [i_0] [i_0]) ? (((var_19 || (arr_0 [i_0])))) : var_7)) : var_7));
                                var_25 &= (4294967295 != var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
