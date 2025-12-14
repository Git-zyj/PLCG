/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((((min(var_7, 68718952448))) ? var_1 : 1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = ((((min((min((arr_8 [i_0] [i_1 + 1] [i_2] [i_3]), 884694533)), ((((arr_10 [i_0] [i_1] [i_2]) ? var_8 : var_3)))))) ? (((68718952443 << 1) ? (min(var_12, var_2)) : 2147483647)) : var_4));
                            var_15 = ((-((~(((-97 + 2147483647) << 0))))));
                            arr_11 [i_1 - 4] = ((((min(((min((arr_3 [i_1]), var_6))), (arr_7 [i_3 - 1])))) ? 68718952448 : ((((1 << (var_10 - 4233320748)))))));
                            var_16 &= ((-var_2 << (((min(((var_10 ? (arr_3 [i_0]) : var_5)), var_9)) - 31172))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = var_10;
    #pragma endscop
}
