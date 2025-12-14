/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_3] [i_1] = (((min(11592, 29280))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((var_13 + 2147483647) >> (var_1 + 58));
                            arr_12 [i_3] [13] [13] [i_0] = var_5;
                            var_15 = ((!(((~((var_11 / (arr_5 [i_0] [i_1] [i_0] [i_3]))))))));
                        }
                    }
                }
                var_16 -= ((var_8 & (arr_2 [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, (arr_3 [i_5])));
                            var_18 = var_12;
                        }
                    }
                }
                var_19 = (min(var_19, (~3583107836)));
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
