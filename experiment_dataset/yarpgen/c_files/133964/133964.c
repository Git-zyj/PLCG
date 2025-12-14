/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_4] [i_1] [8] = -3900829805118713448;
                                var_11 = -837669437;
                                var_12 = ((((((837669429 & 32747) ? var_1 : -23665))) ? (((((arr_1 [i_1]) + 2147483647)) >> (837669436 - 837669416))) : ((var_7 / (131 * -32269)))));
                            }
                        }
                    }
                    var_13 = -19178;
                }
            }
        }
    }
    var_14 = (var_0 >= 23028);
    var_15 &= (!var_1);
    var_16 = (max(var_16, ((((((~(var_6 - 181)))) || ((max((max(var_2, var_10)), (-837669426 / 79)))))))));
    #pragma endscop
}
