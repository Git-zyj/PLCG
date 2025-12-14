/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0 + 4] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (min((arr_2 [i_3 - 1]), ((min(((-(arr_4 [i_0] [i_0] [i_2]))), var_5)))));
                            var_15 = 2510825550;
                        }
                    }
                }
                var_16 = (arr_3 [i_0] [i_0]);
                var_17 ^= (min((arr_7 [i_0 + 2]), var_3));
            }
        }
    }
    var_18 = ((1 ? 4294967274 : 2707737543));
    var_19 = var_0;
    var_20 = ((-(max(var_5, 1495708685))));
    #pragma endscop
}
