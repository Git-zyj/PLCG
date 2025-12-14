/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 ^= (((((arr_4 [i_0] [i_0] [i_0]) ? (arr_2 [16] [16]) : 30495)) * 1));
                var_17 = ((-((((0 ? 1 : 0))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 = (min(((min((min((arr_5 [i_0]), -8937)), (-311367583126148107 >= 0)))), var_7));
                    var_19 = (min(var_19, ((max(0, -2123926398)))));
                    var_20 = (min(var_20, (((-(((((((-2147483647 - 1) ? -80 : 1)) + 2147483647)) << (var_10 - 247))))))));
                    var_21 = 2123926375;
                }
                var_22 = var_15;
            }
        }
    }
    var_23 = (max(var_23, var_11));
    var_24 = (min(((((min(var_8, var_14))) * (~1))), -var_2));
    var_25 = var_8;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_26 = (min(-211879424, ((var_15 ? (!var_5) : -3783701960))));
                arr_12 [i_4] = var_14;
                var_27 = 127;
            }
        }
    }
    #pragma endscop
}
