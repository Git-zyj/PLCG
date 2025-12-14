/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((max(((23490 ? 2234489967504280390 : var_6)), var_10)))));
    var_14 = (min((max(var_11, ((var_3 ? var_8 : 24)))), ((max(0, 55615)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min(-4194304, 42218))) ? ((var_9 ? 109 : 18446744073709551615)) : (((~((0 ? (arr_10 [i_4] [i_1]) : 1)))))));
                                arr_15 [i_0] [i_4] = (((max(58911, 4194303)) % (arr_4 [i_1 - 1] [i_4 + 1])));
                            }
                        }
                    }
                }
                var_15 = (min((min(-22536, 0)), (((!(arr_5 [i_0] [i_0]))))));
            }
        }
    }
    var_16 = (min(var_16, var_11));
    #pragma endscop
}
