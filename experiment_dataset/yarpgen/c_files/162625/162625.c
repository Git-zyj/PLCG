/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min((~127), (-9223372036854775807 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_0] [i_1] [i_0] = (~2);
                                var_17 = (min(var_17, 18446744073709551613));
                                var_18 *= 0;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] |= (~4059805970463636207);
                            }
                        }
                    }
                    var_19 -= (min(608351137, (min((~268382163094078488), (~94)))));
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
