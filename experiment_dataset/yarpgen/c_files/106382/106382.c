/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~94);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((var_7 || var_11) ? (arr_3 [i_0] [i_1 - 1]) : ((((var_11 + 2147483647) >> (((arr_3 [i_0] [i_1 + 2]) - 6019557272499727582)))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = 609814561;
                    var_17 = (((arr_3 [i_1 - 1] [i_1 + 1]) & var_0));
                    var_18 = (((min(-6620998512623905348, (arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2]))) / (arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
